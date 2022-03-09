// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int kol = 0;
  for (int i = 0; i <= size; i++){
  if (*(arr + i) == value){
  kol += 1;
  }
  if (kol > 0){
  return kol;
  }else{
  return 0; // если ничего не найдено
  }
}
