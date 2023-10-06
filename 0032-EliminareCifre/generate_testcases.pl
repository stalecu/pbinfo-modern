use strict;
use warnings;
my $N = 2**31 - 1;
my $M = 2**15 - 1;

open my $fh, '>', 'expected.txt' or die $!;
open my $hf, '>', 'input.txt' or die $!;

for my $n (2..$M) {
    my $n = int(1 + rand($N));
    
    my @digits = split //, "$n";
    my $c = splice(@digits, rand @digits, 1);

    print $hf "$n $c\n";
    $n =~ s/$c//g;
    $n =~ s/^0+//;

    if ($n eq "" || $n == 0) {
        $n = 0;
    }
    $n = int($n);
    print $fh "$n\n";
}