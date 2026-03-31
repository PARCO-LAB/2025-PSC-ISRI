#include <stdio.h>
#include <stdbool.h>

struct date {
  int day;
  int month;
  int year;
};

bool is_leap(int year) {
  return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int days_in_month(int month, int year) {
  if (month == 2) {
    return is_leap(year) ? 29 : 28;
  }
  if (month == 4 || month == 6 || month == 9 || month == 11) {
    return 30;
  }
  return 31;
}

bool is_valid_date(struct date d) {
  if (d.year < 1) return false;
  if (d.month < 1 || d.month > 12) return false;
  if (d.day < 1 || d.day > days_in_month(d.month, d.year)) return false;
  return true;
}

void updateDate(struct date *d) {
  d->day += 10;
  while (d->day > days_in_month(d->month, d->year)) {
    d->day -= days_in_month(d->month, d->year);
    d->month++;
    if (d->month > 12) {
      d->month = 1;
      d->year++;
    }
  }
}

int main() {
  struct date dt;
  do {
    printf("Inserisci una data valida (gg mm aaaa): ");
    if (scanf("%d %d %d", &dt.day, &dt.month, &dt.year) != 3) {
      printf("Errore di input.\n");
      // Svuota buffer per evitare loop infinito se non si preme invio correttamente
      int c;
      while ((c = getchar()) != '\n' && c != EOF);
    } else if (!is_valid_date(dt)) {
      printf("Data inserita non valida.\n");
    }
  } while (!is_valid_date(dt));

  updateDate(&dt);
  printf("Data tra 10 giorni: %02d/%02d/%04d\n", dt.day, dt.month, dt.year);
  return 0;
}
