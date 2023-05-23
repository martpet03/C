float average_num(int a[], int size) {
   float sum = 0;
   float avg = 0;
   for (int i = 0; i < size; i++) {
      sum += a[i];
   }
   avg = sum / size;
   return avg;
}

int main() {
   int a[7];
   int size = sizeof(a) / sizeof(int);

   for (int i = 0; i < size; i++) {
      int n;
      printf("Enter number %d between -5000 and 5000: ", i+1);
      scanf("%d", &n);
      if (n >= -5000 && n <= 5000) {
         a[i] = n;
      } else {
         printf("Invalid input! The number should be between -5000 and 5000.\n");

      }
   }

   float avg = average_num(a, size);
   printf("Average = %.3f\n", avg);

   int nearest_index = 0;
   float nearest_diff = fabs(a[0] - avg);

   for (int i = 1; i < size; i++) {
      float diff = fabs(a[i] - avg);
      if (diff < nearest_diff) {
         nearest_index = i;
         nearest_diff = diff;
      }
   }

   int nearest_order = 0;
   for (int i = 0; i < size; i++) {
      if (a[i] < a[nearest_index]) {
         nearest_order++;
      }
   }
   nearest_order++;

   printf("The nearest value to the average is %d at %d place", a[nearest_index], nearest_order);

   return 0;

}
