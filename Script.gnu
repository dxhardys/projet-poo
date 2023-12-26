
set terminal png size 1200,1000
set output "graphique.png"

set xlabel "x(i)"
set ylabel "u(i)"
set grid
set style data lines


plot 'schemas.txt' using 2:3 with lines title 'Schema Upwind' linecolor rgb "#556B2F",\
     'condition_init.txt' using 2:3 with lines title 'Condition Initiale' linecolor rgb "#730d73", \
     'schemas.txt' using 2:5 with lines title 'Solution Exacte' linecolor rgb "#00BFFF",\
     'schemas.txt' using 2:4 with lines title 'Schema de LaxWendroff' linecolor rgb "#FFD700", 





