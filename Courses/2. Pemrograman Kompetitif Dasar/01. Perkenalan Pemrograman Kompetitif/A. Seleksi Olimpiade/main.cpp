#include <iostream>
#include <limits>

struct dataPeserta {
	std::string id;
	int nilaiSesi1;
	int nilaiSesi2;
	int nilaiSesi3;
};


void tukar(struct dataPeserta &a, struct dataPeserta &b){
	std::swap(a.id, b.id);
	std::swap(a.nilaiSesi1, b.nilaiSesi1);
	std::swap(a.nilaiSesi2, b.nilaiSesi2);
	std::swap(a.nilaiSesi3, b.nilaiSesi3);
}

int main(){



	int T = 0;
	std::cin >> T;
	
	// std::cout << "T : " << T << std::endl;


	for(int i = 0; i < T; i++){
		int N = 0, M = 0;
		std::string idFokus;
		std::cin >> N >> M;
		// std::cout << "N : " << N << std::endl;
		// std::cout << "M : " << M << std::endl;
		std::cin >> idFokus;
		// std::cout << "idFokus : " << idFokus << std::endl;

		struct dataPeserta dataSemua[N];
		for(int j = 0; j < N; j++){
			std::cin >> dataSemua[j].id;
			std::cin >> dataSemua[j].nilaiSesi1;
			std::cin >> dataSemua[j].nilaiSesi2;
			std::cin >> dataSemua[j].nilaiSesi3;
		}

		// mengurutkan
		for(int j = 0; j < N - 1; j++){
			int fokusIdx = j;
			for(int k = j; k < N - 1; k++){
				if(dataSemua[fokusIdx].nilaiSesi3 < dataSemua[k + 1].nilaiSesi3){
					tukar(dataSemua[fokusIdx], dataSemua[k + 1]);
				}else if(dataSemua[fokusIdx].nilaiSesi3 == dataSemua[k + 1].nilaiSesi3){
					if(dataSemua[fokusIdx].nilaiSesi2 < dataSemua[k + 1].nilaiSesi2){
						tukar(dataSemua[fokusIdx], dataSemua[k + 1]);
					}else if(dataSemua[fokusIdx].nilaiSesi2 == dataSemua[k + 1].nilaiSesi2){
						if(dataSemua[fokusIdx].nilaiSesi1 < dataSemua[k + 1].nilaiSesi1){
							tukar(dataSemua[fokusIdx], dataSemua[k + 1]);
						}
					}
				}
			}
		}

		// std::cout << " keluaran: " << std::endl;

		int peringkatIdFokus = -1;
		for(int j = 0; j < N; j++){
			// std::cout << dataSemua[j].id << " ";
			// std::cout << dataSemua[j].nilaiSesi1 << " ";
			// std::cout << dataSemua[j].nilaiSesi2 << " ";
			// std::cout << dataSemua[j].nilaiSesi3 << "\n";

			if(dataSemua[j].id.compare(idFokus) == 0){
				peringkatIdFokus = j;
				// std::cout << "peringkatIdFokus : " << peringkatIdFokus << std::endl;
			}
		}

		// std::cout << "peringkatIdFokus : " << peringkatIdFokus << std::endl;

		if(peringkatIdFokus + 1 <= M){
			std::cout << "YA" << std::endl;
		}else{
			std::cout << "TIDAK" << std::endl;
		}

	}

	return 0;
}