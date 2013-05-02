#define DATA_SIZE 30
const double input1_data[DATA_SIZE*DATA_SIZE] = {
745.0, 504.0, 772.0, 818.0, 443.0, 308.0, 823.0, 523.0, 93.0, 379.0, 728.0, 543.0, 40.0, 482.0, 728.0, 487.0, 144.0, 486.0, 109.0, 994.0, 373.0, 257.0, 196.0, 145.0, 234.0, 301.0, 639.0, 379.0, 913.0, 420.0, 
264.0, 636.0, 873.0, 677.0, 330.0, 928.0, 30.0, 603.0, 96.0, 510.0, 196.0, 55.0, 702.0, 663.0, 151.0, 526.0, 624.0, 598.0, 529.0, 926.0, 914.0, 641.0, 401.0, 146.0, 756.0, 550.0, 92.0, 452.0, 786.0, 417.0, 
115.0, 202.0, 806.0, 841.0, 657.0, 33.0, 66.0, 595.0, 751.0, 302.0, 70.0, 453.0, 318.0, 580.0, 114.0, 85.0, 585.0, 959.0, 393.0, 810.0, 276.0, 839.0, 58.0, 632.0, 940.0, 568.0, 676.0, 625.0, 861.0, 702.0, 
413.0, 79.0, 762.0, 494.0, 695.0, 774.0, 877.0, 968.0, 327.0, 742.0, 163.0, 353.0, 692.0, 870.0, 634.0, 60.0, 545.0, 300.0, 625.0, 48.0, 390.0, 713.0, 661.0, 613.0, 673.0, 89.0, 116.0, 472.0, 837.0, 864.0, 
256.0, 542.0, 660.0, 768.0, 474.0, 229.0, 783.0, 583.0, 975.0, 278.0, 838.0, 557.0, 372.0, 815.0, 94.0, 820.0, 713.0, 685.0, 606.0, 304.0, 549.0, 150.0, 237.0, 981.0, 111.0, 85.0, 741.0, 960.0, 499.0, 110.0, 
540.0, 414.0, 153.0, 809.0, 477.0, 176.0, 46.0, 27.0, 106.0, 704.0, 709.0, 728.0, 355.0, 934.0, 38.0, 974.0, 744.0, 651.0, 169.0, 514.0, 550.0, 742.0, 456.0, 453.0, 106.0, 956.0, 374.0, 945.0, 688.0, 594.0, 
983.0, 686.0, 86.0, 247.0, 389.0, 914.0, 378.0, 837.0, 556.0, 332.0, 884.0, 102.0, 651.0, 329.0, 305.0, 874.0, 863.0, 752.0, 94.0, 102.0, 878.0, 200.0, 645.0, 601.0, 573.0, 369.0, 247.0, 241.0, 158.0, 647.0, 
166.0, 139.0, 810.0, 531.0, 118.0, 750.0, 759.0, 621.0, 87.0, 472.0, 846.0, 644.0, 209.0, 515.0, 172.0, 565.0, 685.0, 344.0, 850.0, 218.0, 788.0, 323.0, 867.0, 809.0, 991.0, 806.0, 617.0, 878.0, 937.0, 816.0, 
517.0, 811.0, 181.0, 590.0, 705.0, 691.0, 847.0, 233.0, 652.0, 374.0, 570.0, 160.0, 873.0, 78.0, 246.0, 652.0, 876.0, 145.0, 587.0, 729.0, 467.0, 111.0, 590.0, 653.0, 972.0, 987.0, 231.0, 809.0, 456.0, 887.0, 
861.0, 60.0, 588.0, 71.0, 519.0, 479.0, 640.0, 608.0, 336.0, 259.0, 7.0, 578.0, 53.0, 823.0, 305.0, 911.0, 230.0, 445.0, 216.0, 696.0, 278.0, 804.0, 413.0, 333.0, 409.0, 632.0, 86.0, 401.0, 226.0, 93.0, 
815.0, 177.0, 894.0, 51.0, 441.0, 785.0, 888.0, 915.0, 347.0, 55.0, 762.0, 896.0, 964.0, 539.0, 572.0, 889.0, 275.0, 43.0, 220.0, 195.0, 963.0, 342.0, 915.0, 651.0, 750.0, 286.0, 632.0, 168.0, 652.0, 880.0, 
803.0, 439.0, 112.0, 544.0, 624.0, 656.0, 679.0, 117.0, 413.0, 798.0, 230.0, 571.0, 106.0, 36.0, 656.0, 848.0, 733.0, 931.0, 513.0, 614.0, 302.0, 776.0, 401.0, 703.0, 510.0, 682.0, 280.0, 351.0, 79.0, 353.0, 
106.0, 355.0, 343.0, 802.0, 232.0, 583.0, 103.0, 663.0, 683.0, 37.0, 130.0, 795.0, 261.0, 202.0, 949.0, 739.0, 926.0, 930.0, 522.0, 872.0, 567.0, 724.0, 0.0, 385.0, 191.0, 704.0, 586.0, 974.0, 944.0, 100.0, 
506.0, 903.0, 325.0, 622.0, 218.0, 842.0, 298.0, 676.0, 503.0, 4.0, 784.0, 63.0, 195.0, 495.0, 740.0, 518.0, 845.0, 649.0, 730.0, 287.0, 231.0, 477.0, 939.0, 472.0, 324.0, 459.0, 784.0, 988.0, 572.0, 338.0, 
114.0, 993.0, 965.0, 134.0, 608.0, 613.0, 527.0, 645.0, 324.0, 497.0, 949.0, 659.0, 555.0, 494.0, 91.0, 317.0, 222.0, 276.0, 232.0, 266.0, 985.0, 146.0, 713.0, 54.0, 592.0, 879.0, 799.0, 16.0, 273.0, 791.0, 
47.0, 235.0, 306.0, 873.0, 829.0, 266.0, 672.0, 893.0, 396.0, 396.0, 809.0, 603.0, 307.0, 712.0, 551.0, 390.0, 551.0, 898.0, 777.0, 672.0, 385.0, 810.0, 39.0, 311.0, 868.0, 734.0, 554.0, 941.0, 414.0, 182.0, 
549.0, 589.0, 24.0, 141.0, 332.0, 833.0, 76.0, 431.0, 528.0, 313.0, 690.0, 190.0, 860.0, 670.0, 991.0, 679.0, 0.0, 460.0, 122.0, 585.0, 647.0, 157.0, 260.0, 941.0, 943.0, 27.0, 820.0, 81.0, 612.0, 622.0, 
252.0, 183.0, 673.0, 275.0, 27.0, 867.0, 36.0, 45.0, 80.0, 321.0, 373.0, 485.0, 232.0, 428.0, 379.0, 973.0, 532.0, 804.0, 763.0, 91.0, 802.0, 463.0, 190.0, 153.0, 910.0, 552.0, 885.0, 976.0, 84.0, 572.0, 
83.0, 109.0, 349.0, 881.0, 368.0, 980.0, 316.0, 97.0, 654.0, 737.0, 652.0, 525.0, 714.0, 526.0, 608.0, 245.0, 296.0, 765.0, 222.0, 403.0, 419.0, 663.0, 256.0, 23.0, 144.0, 446.0, 905.0, 933.0, 238.0, 709.0, 
17.0, 587.0, 508.0, 879.0, 525.0, 310.0, 486.0, 372.0, 742.0, 764.0, 462.0, 8.0, 108.0, 741.0, 803.0, 502.0, 422.0, 579.0, 993.0, 835.0, 953.0, 584.0, 92.0, 932.0, 579.0, 534.0, 602.0, 473.0, 99.0, 961.0, 
413.0, 83.0, 255.0, 849.0, 953.0, 912.0, 552.0, 220.0, 968.0, 600.0, 918.0, 48.0, 863.0, 88.0, 132.0, 278.0, 957.0, 507.0, 320.0, 618.0, 768.0, 776.0, 401.0, 943.0, 995.0, 695.0, 869.0, 295.0, 960.0, 357.0, 
446.0, 304.0, 926.0, 664.0, 785.0, 211.0, 287.0, 420.0, 187.0, 325.0, 49.0, 355.0, 607.0, 752.0, 783.0, 963.0, 952.0, 188.0, 939.0, 953.0, 384.0, 255.0, 674.0, 747.0, 243.0, 892.0, 60.0, 3.0, 643.0, 831.0, 
734.0, 240.0, 944.0, 943.0, 382.0, 671.0, 12.0, 292.0, 18.0, 966.0, 296.0, 335.0, 206.0, 881.0, 22.0, 473.0, 888.0, 510.0, 725.0, 276.0, 769.0, 506.0, 202.0, 789.0, 515.0, 110.0, 658.0, 835.0, 345.0, 885.0, 
776.0, 194.0, 8.0, 124.0, 908.0, 176.0, 144.0, 820.0, 803.0, 56.0, 270.0, 676.0, 741.0, 621.0, 290.0, 214.0, 511.0, 382.0, 431.0, 164.0, 173.0, 504.0, 116.0, 828.0, 68.0, 465.0, 263.0, 383.0, 793.0, 32.0, 
313.0, 39.0, 34.0, 331.0, 874.0, 310.0, 607.0, 128.0, 505.0, 948.0, 827.0, 357.0, 31.0, 904.0, 165.0, 491.0, 809.0, 607.0, 390.0, 156.0, 441.0, 219.0, 198.0, 165.0, 592.0, 890.0, 192.0, 791.0, 234.0, 424.0, 
886.0, 552.0, 965.0, 615.0, 370.0, 30.0, 79.0, 178.0, 67.0, 148.0, 20.0, 241.0, 928.0, 301.0, 73.0, 55.0, 428.0, 812.0, 752.0, 535.0, 110.0, 518.0, 584.0, 661.0, 35.0, 856.0, 279.0, 633.0, 354.0, 450.0, 
327.0, 165.0, 508.0, 261.0, 763.0, 496.0, 415.0, 872.0, 557.0, 428.0, 110.0, 406.0, 341.0, 425.0, 326.0, 644.0, 904.0, 676.0, 542.0, 590.0, 738.0, 651.0, 980.0, 521.0, 865.0, 511.0, 920.0, 563.0, 448.0, 780.0, 
920.0, 999.0, 28.0, 940.0, 120.0, 908.0, 167.0, 319.0, 891.0, 53.0, 158.0, 319.0, 202.0, 283.0, 793.0, 608.0, 320.0, 711.0, 447.0, 533.0, 528.0, 300.0, 532.0, 797.0, 571.0, 960.0, 104.0, 773.0, 122.0, 99.0, 
156.0, 119.0, 932.0, 689.0, 227.0, 991.0, 396.0, 890.0, 579.0, 54.0, 459.0, 624.0, 976.0, 904.0, 781.0, 712.0, 403.0, 560.0, 226.0, 225.0, 940.0, 68.0, 140.0, 714.0, 937.0, 731.0, 624.0, 416.0, 601.0, 50.0, 
883.0, 869.0, 921.0, 350.0, 226.0, 596.0, 698.0, 51.0, 510.0, 865.0, 942.0, 971.0, 794.0, 254.0, 757.0, 19.0, 690.0, 303.0, 664.0, 127.0, 538.0, 487.0, 609.0, 86.0, 688.0, 76.0, 477.0, 664.0, 343.0, 613.0
};
const double input2_data[DATA_SIZE*DATA_SIZE] = {
494.0, 929.0, 783.0, 86.0, 317.0, 957.0, 289.0, 481.0, 222.0, 945.0, 97.0, 952.0, 1.0, 834.0, 795.0, 59.0, 127.0, 10.0, 399.0, 904.0, 907.0, 665.0, 623.0, 841.0, 190.0, 903.0, 698.0, 132.0, 775.0, 911.0, 
346.0, 417.0, 995.0, 439.0, 159.0, 390.0, 902.0, 917.0, 174.0, 462.0, 638.0, 484.0, 505.0, 353.0, 943.0, 724.0, 684.0, 845.0, 753.0, 983.0, 353.0, 730.0, 883.0, 679.0, 449.0, 442.0, 242.0, 117.0, 64.0, 143.0, 
42.0, 476.0, 395.0, 343.0, 983.0, 724.0, 153.0, 3.0, 88.0, 131.0, 475.0, 517.0, 297.0, 917.0, 522.0, 776.0, 796.0, 468.0, 11.0, 9.0, 788.0, 908.0, 161.0, 554.0, 429.0, 381.0, 495.0, 720.0, 795.0, 563.0, 
976.0, 786.0, 349.0, 930.0, 421.0, 218.0, 589.0, 210.0, 18.0, 536.0, 888.0, 18.0, 142.0, 674.0, 684.0, 297.0, 190.0, 160.0, 195.0, 232.0, 917.0, 451.0, 955.0, 340.0, 553.0, 470.0, 287.0, 263.0, 164.0, 28.0, 
133.0, 206.0, 141.0, 697.0, 860.0, 45.0, 508.0, 61.0, 442.0, 142.0, 991.0, 523.0, 720.0, 544.0, 787.0, 231.0, 635.0, 828.0, 162.0, 150.0, 656.0, 915.0, 557.0, 56.0, 539.0, 108.0, 862.0, 160.0, 739.0, 561.0, 
525.0, 564.0, 334.0, 977.0, 789.0, 287.0, 316.0, 169.0, 18.0, 140.0, 322.0, 707.0, 458.0, 646.0, 902.0, 728.0, 877.0, 386.0, 922.0, 657.0, 490.0, 942.0, 127.0, 617.0, 143.0, 979.0, 911.0, 71.0, 348.0, 989.0, 
55.0, 968.0, 173.0, 987.0, 959.0, 865.0, 850.0, 194.0, 776.0, 681.0, 893.0, 564.0, 305.0, 645.0, 600.0, 214.0, 613.0, 790.0, 496.0, 127.0, 564.0, 197.0, 818.0, 419.0, 597.0, 414.0, 552.0, 240.0, 517.0, 34.0, 
487.0, 497.0, 614.0, 182.0, 761.0, 45.0, 959.0, 441.0, 90.0, 500.0, 76.0, 435.0, 905.0, 920.0, 402.0, 641.0, 621.0, 526.0, 521.0, 438.0, 457.0, 224.0, 718.0, 611.0, 909.0, 347.0, 524.0, 158.0, 491.0, 331.0, 
727.0, 536.0, 243.0, 503.0, 252.0, 633.0, 675.0, 671.0, 600.0, 598.0, 479.0, 522.0, 92.0, 778.0, 793.0, 956.0, 562.0, 659.0, 29.0, 132.0, 182.0, 491.0, 107.0, 891.0, 108.0, 664.0, 985.0, 608.0, 610.0, 589.0, 
364.0, 665.0, 689.0, 262.0, 356.0, 324.0, 646.0, 275.0, 906.0, 316.0, 551.0, 836.0, 14.0, 495.0, 900.0, 859.0, 529.0, 900.0, 516.0, 654.0, 635.0, 90.0, 337.0, 59.0, 954.0, 419.0, 921.0, 903.0, 393.0, 503.0, 
458.0, 879.0, 568.0, 925.0, 809.0, 496.0, 22.0, 780.0, 966.0, 265.0, 759.0, 872.0, 352.0, 110.0, 467.0, 641.0, 321.0, 272.0, 646.0, 765.0, 413.0, 935.0, 309.0, 661.0, 796.0, 881.0, 283.0, 612.0, 602.0, 684.0, 
680.0, 332.0, 688.0, 896.0, 483.0, 131.0, 680.0, 265.0, 828.0, 779.0, 410.0, 176.0, 657.0, 776.0, 678.0, 232.0, 522.0, 722.0, 485.0, 878.0, 987.0, 754.0, 225.0, 897.0, 374.0, 704.0, 117.0, 929.0, 586.0, 891.0, 
162.0, 237.0, 300.0, 147.0, 648.0, 324.0, 376.0, 552.0, 381.0, 589.0, 788.0, 637.0, 461.0, 802.0, 481.0, 694.0, 406.0, 127.0, 623.0, 743.0, 662.0, 257.0, 636.0, 655.0, 827.0, 649.0, 961.0, 561.0, 511.0, 991.0, 
633.0, 907.0, 279.0, 732.0, 527.0, 31.0, 54.0, 320.0, 875.0, 863.0, 82.0, 881.0, 272.0, 677.0, 787.0, 149.0, 709.0, 457.0, 411.0, 287.0, 598.0, 27.0, 231.0, 853.0, 270.0, 520.0, 96.0, 178.0, 51.0, 938.0, 
414.0, 639.0, 127.0, 888.0, 18.0, 821.0, 606.0, 253.0, 566.0, 134.0, 833.0, 324.0, 316.0, 393.0, 157.0, 753.0, 888.0, 131.0, 40.0, 450.0, 762.0, 139.0, 603.0, 196.0, 324.0, 590.0, 573.0, 738.0, 252.0, 297.0, 
353.0, 280.0, 718.0, 350.0, 813.0, 663.0, 2.0, 405.0, 405.0, 353.0, 957.0, 699.0, 981.0, 499.0, 807.0, 648.0, 0.0, 675.0, 8.0, 514.0, 215.0, 22.0, 463.0, 671.0, 65.0, 764.0, 25.0, 232.0, 891.0, 152.0, 
698.0, 426.0, 813.0, 87.0, 12.0, 246.0, 1.0, 834.0, 81.0, 695.0, 296.0, 935.0, 30.0, 699.0, 811.0, 881.0, 822.0, 259.0, 883.0, 935.0, 447.0, 973.0, 629.0, 58.0, 534.0, 745.0, 654.0, 344.0, 826.0, 568.0, 
198.0, 814.0, 111.0, 912.0, 84.0, 179.0, 706.0, 700.0, 838.0, 455.0, 972.0, 216.0, 659.0, 210.0, 781.0, 842.0, 248.0, 465.0, 518.0, 37.0, 3.0, 803.0, 562.0, 983.0, 375.0, 34.0, 882.0, 586.0, 668.0, 228.0, 
644.0, 632.0, 530.0, 729.0, 783.0, 543.0, 450.0, 151.0, 302.0, 148.0, 225.0, 794.0, 590.0, 212.0, 146.0, 191.0, 718.0, 621.0, 303.0, 343.0, 562.0, 715.0, 516.0, 409.0, 36.0, 486.0, 248.0, 416.0, 624.0, 865.0, 
680.0, 460.0, 737.0, 813.0, 658.0, 396.0, 749.0, 132.0, 875.0, 73.0, 243.0, 874.0, 309.0, 5.0, 748.0, 526.0, 273.0, 634.0, 661.0, 382.0, 61.0, 728.0, 511.0, 960.0, 418.0, 454.0, 249.0, 725.0, 68.0, 306.0, 
899.0, 127.0, 599.0, 587.0, 7.0, 236.0, 722.0, 531.0, 694.0, 403.0, 163.0, 483.0, 557.0, 10.0, 855.0, 494.0, 90.0, 186.0, 180.0, 335.0, 646.0, 74.0, 869.0, 751.0, 409.0, 777.0, 449.0, 310.0, 989.0, 624.0, 
672.0, 27.0, 968.0, 211.0, 459.0, 70.0, 617.0, 431.0, 983.0, 291.0, 878.0, 599.0, 69.0, 873.0, 904.0, 337.0, 250.0, 120.0, 20.0, 389.0, 254.0, 714.0, 478.0, 62.0, 931.0, 992.0, 324.0, 537.0, 84.0, 333.0, 
724.0, 874.0, 511.0, 407.0, 915.0, 566.0, 809.0, 905.0, 811.0, 291.0, 572.0, 374.0, 376.0, 988.0, 751.0, 881.0, 888.0, 169.0, 922.0, 616.0, 181.0, 203.0, 389.0, 622.0, 568.0, 204.0, 924.0, 543.0, 331.0, 765.0, 
273.0, 742.0, 682.0, 913.0, 38.0, 787.0, 983.0, 783.0, 821.0, 848.0, 114.0, 661.0, 678.0, 634.0, 865.0, 551.0, 700.0, 253.0, 481.0, 231.0, 860.0, 680.0, 801.0, 783.0, 987.0, 624.0, 888.0, 770.0, 11.0, 689.0, 
731.0, 72.0, 538.0, 78.0, 324.0, 368.0, 176.0, 305.0, 817.0, 136.0, 122.0, 783.0, 608.0, 391.0, 136.0, 859.0, 13.0, 452.0, 663.0, 826.0, 880.0, 728.0, 947.0, 342.0, 646.0, 182.0, 13.0, 148.0, 450.0, 610.0, 
477.0, 121.0, 487.0, 143.0, 125.0, 153.0, 268.0, 635.0, 745.0, 792.0, 981.0, 109.0, 694.0, 353.0, 547.0, 559.0, 974.0, 59.0, 655.0, 694.0, 165.0, 628.0, 544.0, 694.0, 476.0, 702.0, 494.0, 627.0, 88.0, 630.0, 
194.0, 650.0, 165.0, 587.0, 884.0, 53.0, 44.0, 931.0, 432.0, 630.0, 214.0, 817.0, 383.0, 3.0, 908.0, 667.0, 205.0, 791.0, 845.0, 584.0, 396.0, 26.0, 547.0, 399.0, 189.0, 438.0, 698.0, 826.0, 734.0, 322.0, 
678.0, 305.0, 868.0, 564.0, 480.0, 499.0, 182.0, 215.0, 276.0, 272.0, 803.0, 21.0, 458.0, 2.0, 90.0, 213.0, 223.0, 97.0, 68.0, 589.0, 408.0, 197.0, 472.0, 915.0, 771.0, 830.0, 907.0, 133.0, 146.0, 848.0, 
89.0, 17.0, 580.0, 755.0, 909.0, 310.0, 249.0, 606.0, 544.0, 193.0, 409.0, 235.0, 537.0, 580.0, 850.0, 838.0, 882.0, 416.0, 365.0, 263.0, 331.0, 868.0, 68.0, 519.0, 206.0, 70.0, 530.0, 927.0, 590.0, 29.0, 
990.0, 507.0, 164.0, 89.0, 550.0, 150.0, 959.0, 787.0, 444.0, 695.0, 79.0, 86.0, 359.0, 841.0, 991.0, 71.0, 537.0, 521.0, 253.0, 88.0, 872.0, 760.0, 71.0, 959.0, 844.0, 24.0, 323.0, 86.0, 284.0, 324.0
};
const double verify_data[DATA_SIZE*DATA_SIZE] = {
6411903.0, 7533490.0, 6901412.0, 8515176.0, 7937886.0, 5660376.0, 6684238.0, 5930516.0, 7411434.0, 5963715.0, 7339541.0, 7325224.0, 5773363.0, 6987016.0, 9472107.0, 7333522.0, 6868741.0, 6373927.0, 5818371.0, 6232365.0, 7410967.0, 7456844.0, 7008217.0, 8317827.0, 6560681.0, 6993670.0, 6792972.0, 6664526.0, 6449148.0, 6153016.0, 
7767492.0, 6619373.0, 8084203.0, 7609675.0, 7767288.0, 5081659.0, 6915392.0, 6473820.0, 7434817.0, 5832034.0, 7317348.0, 8206514.0, 6552649.0, 7813213.0, 1.0197744E7, 8753506.0, 7589899.0, 6153453.0, 6716065.0, 7097060.0, 7488858.0, 8435675.0, 7671781.0, 8759777.0, 7413370.0, 7802106.0, 7613653.0, 6343832.0, 6741596.0, 7885307.0, 
7584476.0, 6627809.0, 7334380.0, 7777143.0, 7311439.0, 4673418.0, 7231791.0, 6792764.0, 8133419.0, 6543855.0, 7278453.0, 7372708.0, 6345899.0, 7821711.0, 1.0014052E7, 8297702.0, 7222827.0, 6550430.0, 5927298.0, 5988751.0, 7626028.0, 8765186.0, 7449916.0, 8719206.0, 7751464.0, 6820384.0, 7786274.0, 7199576.0, 6446456.0, 7164579.0, 
7690319.0, 8107202.0, 7462090.0, 8353962.0, 8807718.0, 5963658.0, 8163425.0, 6652851.0, 8169066.0, 6906018.0, 7448498.0, 8403353.0, 6499220.0, 9827668.0, 1.0370807E7, 8413234.0, 8979741.0, 6743719.0, 6583108.0, 6733404.0, 9203350.0, 8305284.0, 7661872.0, 8475391.0, 8638725.0, 7679995.0, 8961802.0, 6750314.0, 7049775.0, 8577580.0, 
7412324.0, 8652125.0, 7961811.0, 9598288.0, 8296849.0, 6391772.0, 7240482.0, 7531594.0, 8110724.0, 7533868.0, 8155571.0, 8596878.0, 6925515.0, 7915918.0, 1.0572044E7, 8603488.0, 7693006.0, 7286678.0, 6399408.0, 6860014.0, 8027549.0, 7922416.0, 8053228.0, 9735395.0, 7584369.0, 8588126.0, 8653757.0, 7169521.0, 7682896.0, 8137235.0, 
7988409.0, 7238778.0, 8449952.0, 7992084.0, 7262269.0, 5011760.0, 6432958.0, 7422948.0, 8648278.0, 7337408.0, 8462957.0, 7677222.0, 6397788.0, 7568297.0, 1.0797395E7, 7705063.0, 7146568.0, 6022723.0, 6370298.0, 7586299.0, 7452484.0, 7887693.0, 7307727.0, 9197385.0, 7726968.0, 8478492.0, 7601569.0, 6960883.0, 6522251.0, 7976344.0, 
7572166.0, 7897218.0, 7706123.0, 7359858.0, 6988842.0, 5975477.0, 7234281.0, 8027665.0, 7471601.0, 7160694.0, 7249166.0, 8618544.0, 6644699.0, 8171915.0, 1.0497206E7, 8729802.0, 7174778.0, 5972218.0, 7216469.0, 7843533.0, 7628960.0, 7931021.0, 7962767.0, 9166492.0, 7547189.0, 8369468.0, 8488684.0, 5609773.0, 7562941.0, 8204473.0, 
8857954.0, 8551958.0, 8909718.0, 9431684.0, 9556061.0, 6617423.0, 7827032.0, 8179745.0, 9353072.0, 7550842.0, 8121182.0, 8962388.0, 7937096.0, 8954704.0, 1.1085794E7, 9549551.0, 9145331.0, 7163225.0, 7988163.0, 8211966.0, 9352371.0, 9330003.0, 8532410.0, 1.0197366E7, 8931427.0, 8915845.0, 8823015.0, 7853048.0, 8044845.0, 9386048.0, 
8545963.0, 7912549.0, 8606518.0, 8379764.0, 8351466.0, 6814749.0, 8057369.0, 8048780.0, 8451865.0, 7466527.0, 8749940.0, 8919463.0, 7276916.0, 8536482.0, 1.0911699E7, 9197448.0, 8560655.0, 7064115.0, 7860209.0, 8511883.0, 8654584.0, 9323289.0, 8981720.0, 9803015.0, 8598113.0, 8780796.0, 9135261.0, 6665333.0, 7324434.0, 8872122.0, 
5946430.0, 6135788.0, 6591364.0, 6433251.0, 6632373.0, 4985963.0, 5769881.0, 4843727.0, 7021916.0, 5697194.0, 6385378.0, 6994046.0, 5502157.0, 7123974.0, 8365161.0, 6212258.0, 6104723.0, 5313031.0, 4845223.0, 5646055.0, 6129753.0, 6289476.0, 6051385.0, 7494259.0, 5723628.0, 6965055.0, 6172636.0, 5253106.0, 5610430.0, 6685980.0, 
8055844.0, 8469174.0, 8170470.0, 8793113.0, 9859241.0, 7007325.0, 8137618.0, 8029717.0, 8997562.0, 7852580.0, 7740885.0, 9375326.0, 7883965.0, 1.0029182E7, 1.1346371E7, 9215599.0, 8636081.0, 7104102.0, 7496227.0, 8176023.0, 9732692.0, 8508678.0, 8257884.0, 1.0379885E7, 8448925.0, 9060668.0, 8836821.0, 7441640.0, 8726147.0, 9513821.0, 
7367171.0, 7678838.0, 7804927.0, 8158615.0, 6673882.0, 6127379.0, 7575878.0, 6722516.0, 8300529.0, 6711008.0, 8389597.0, 8171405.0, 6196454.0, 7704372.0, 1.029698E7, 8112392.0, 7236981.0, 6508313.0, 6457042.0, 7280014.0, 7526900.0, 8231928.0, 7990796.0, 8184970.0, 7283106.0, 8214745.0, 8201658.0, 6708897.0, 6728783.0, 7449993.0, 
7865362.0, 6776674.0, 8132061.0, 9041300.0, 7066772.0, 5445850.0, 7151522.0, 6942482.0, 7679044.0, 6487802.0, 8458847.0, 7314760.0, 6955102.0, 7314651.0, 9998347.0, 8897441.0, 7785211.0, 6248190.0, 6094040.0, 7118063.0, 7145775.0, 8373612.0, 7778499.0, 9104195.0, 6890059.0, 8603542.0, 8143136.0, 7583203.0, 6981314.0, 7304046.0, 
7986730.0, 8495508.0, 8226132.0, 8837284.0, 8110164.0, 6270243.0, 7155084.0, 8144444.0, 7505249.0, 6776566.0, 8180893.0, 8341901.0, 6720764.0, 7941827.0, 1.0232075E7, 9099507.0, 8475362.0, 6245408.0, 7407245.0, 7953062.0, 7429359.0, 8415664.0, 8058703.0, 9250511.0, 7408836.0, 8633240.0, 8794298.0, 6612461.0, 6871055.0, 8223063.0, 
7048151.0, 7129340.0, 7082981.0, 7489318.0, 8235538.0, 4945598.0, 7158417.0, 7404589.0, 7952446.0, 6524416.0, 7264108.0, 7881673.0, 6788833.0, 7675645.0, 1.0238341E7, 8484876.0, 7867557.0, 7037936.0, 7237519.0, 7346638.0, 7710289.0, 7883823.0, 7209172.0, 8844511.0, 7452039.0, 7340367.0, 7433870.0, 6571140.0, 7229344.0, 7904304.0, 
8240448.0, 7954564.0, 8154706.0, 9504953.0, 8400499.0, 5460298.0, 7584126.0, 6871697.0, 9185194.0, 6905207.0, 9141475.0, 8494493.0, 7418418.0, 7753101.0, 1.0000234E7, 8633021.0, 7846515.0, 7199308.0, 6775263.0, 7435406.0, 8253684.0, 8758868.0, 8831361.0, 9095568.0, 8526076.0, 8528570.0, 8182811.0, 7299290.0, 7191919.0, 8226562.0, 
6751777.0, 7186625.0, 6646412.0, 8018233.0, 6909389.0, 5658036.0, 6840978.0, 7190409.0, 7959774.0, 6192193.0, 6295944.0, 8365353.0, 6495593.0, 6989066.0, 9678769.0, 8422620.0, 6708233.0, 6122942.0, 6541236.0, 6976638.0, 7715128.0, 7027844.0, 7287427.0, 8765201.0, 6824683.0, 7411205.0, 7587931.0, 6447872.0, 6342510.0, 7582018.0, 
7082585.0, 6197492.0, 6807726.0, 6956058.0, 6641216.0, 4830697.0, 5048238.0, 6053977.0, 6808066.0, 5552500.0, 6709804.0, 7175350.0, 6209976.0, 5950372.0, 8477306.0, 7412364.0, 5897445.0, 5540244.0, 5666371.0, 6696737.0, 6961106.0, 6862383.0, 6637593.0, 8019798.0, 5997948.0, 7597047.0, 6638311.0, 5646733.0, 6753680.0, 7600719.0, 
7405626.0, 7342316.0, 6412193.0, 8347922.0, 7388131.0, 4709450.0, 6484686.0, 6422277.0, 7614878.0, 6155351.0, 8101524.0, 7056940.0, 5444306.0, 7010298.0, 9663947.0, 7786125.0, 6890705.0, 6006121.0, 6032720.0, 6508389.0, 7243995.0, 7137452.0, 6513236.0, 8338516.0, 7172679.0, 7934665.0, 8344129.0, 6707389.0, 6191989.0, 7659162.0, 
8824351.0, 8499764.0, 7935349.0, 9362467.0, 7540129.0, 6218015.0, 8666871.0, 7431305.0, 9119473.0, 7093927.0, 8066413.0, 8889088.0, 6865107.0, 7703744.0, 1.1009442E7, 8749305.0, 8122317.0, 7493355.0, 6353037.0, 6661887.0, 8703986.0, 8305822.0, 8770358.0, 9415405.0, 8359360.0, 8392544.0, 8323587.0, 7316703.0, 6900664.0, 7998790.0, 
8559320.0, 8232032.0, 8582628.0, 9561300.0, 8909146.0, 6399353.0, 7974575.0, 8670453.0, 9676934.0, 7602031.0, 9078286.0, 1.0045779E7, 7111219.0, 8996593.0, 1.226795E7, 1.0495147E7, 8627020.0, 7247946.0, 8214785.0, 8248879.0, 8942703.0, 1.0207892E7, 9159335.0, 9386478.0, 9122587.0, 9412550.0, 1.0407378E7, 8320858.0, 8412198.0, 9183005.0, 
7864178.0, 7731246.0, 7874580.0, 8126602.0, 8217140.0, 6306880.0, 7598202.0, 6913447.0, 7964758.0, 7035041.0, 7879116.0, 8569671.0, 7028566.0, 9038832.0, 1.0641974E7, 8450936.0, 9082649.0, 6675630.0, 6481241.0, 6939335.0, 8501496.0, 8693928.0, 7876616.0, 8953343.0, 7470078.0, 7817750.0, 7845736.0, 7283306.0, 7144396.0, 8159051.0, 
8244761.0, 8043437.0, 8160617.0, 7960796.0, 7638538.0, 5521627.0, 6770600.0, 6827077.0, 7424432.0, 7085102.0, 6703036.0, 8663556.0, 6008305.0, 8127122.0, 1.0757715E7, 7838981.0, 7320679.0, 6470974.0, 6395050.0, 7078761.0, 9051568.0, 8296696.0, 7669203.0, 8793438.0, 7935840.0, 8242858.0, 8167852.0, 6513437.0, 7222152.0, 8621155.0, 
5398601.0, 5656258.0, 6127160.0, 6431306.0, 5861315.0, 4330490.0, 5807953.0, 5755300.0, 6320034.0, 6114599.0, 5885148.0, 6497254.0, 5450734.0, 6993714.0, 8061082.0, 6229394.0, 6511621.0, 4914814.0, 4902640.0, 5650877.0, 6261491.0, 6670406.0, 5878213.0, 7134964.0, 5872648.0, 6551681.0, 7116052.0, 5637658.0, 5610163.0, 6938664.0, 
6665479.0, 6655902.0, 6361533.0, 6987969.0, 6216951.0, 4491075.0, 5339732.0, 5808102.0, 7720459.0, 6041092.0, 7229382.0, 7153949.0, 5369655.0, 6203304.0, 8545499.0, 6785740.0, 6520276.0, 5817279.0, 5606822.0, 6256946.0, 6558416.0, 6783016.0, 6327605.0, 7218378.0, 6631328.0, 6923787.0, 7005653.0, 5461050.0, 6094680.0, 7234228.0, 
5843630.0, 6349173.0, 6588290.0, 6096008.0, 6187686.0, 4971317.0, 6130619.0, 5956329.0, 6069945.0, 6017854.0, 6689679.0, 6237127.0, 5164682.0, 6970236.0, 8278739.0, 6412665.0, 6644780.0, 4531485.0, 5404887.0, 5762443.0, 6496410.0, 7358530.0, 6524107.0, 7809916.0, 6432073.0, 6378435.0, 7274185.0, 5883336.0, 5290775.0, 7048857.0, 
8593925.0, 7961767.0, 8292016.0, 8257014.0, 8765041.0, 5832016.0, 8184239.0, 8118105.0, 8933460.0, 7297129.0, 7909218.0, 9048344.0, 7497893.0, 8965430.0, 1.135426E7, 9530131.0, 8401874.0, 7390341.0, 7549933.0, 7675511.0, 8338916.0, 8618154.0, 8505674.0, 9483324.0, 8414926.0, 8193850.0, 9268065.0, 7355728.0, 8122626.0, 8739657.0, 
7908996.0, 7506755.0, 7778220.0, 8175639.0, 5766252.0, 6284412.0, 7460913.0, 6975311.0, 7164714.0, 6767688.0, 7763452.0, 7215835.0, 6324251.0, 7271730.0, 9511219.0, 8140001.0, 7262476.0, 5372931.0, 6328202.0, 7443961.0, 7220668.0, 7721429.0, 8144112.0, 9294316.0, 6481768.0, 8506164.0, 8022424.0, 5875671.0, 5724007.0, 7793814.0, 
7633150.0, 7688795.0, 7394176.0, 9147539.0, 8138372.0, 6018889.0, 6933383.0, 7053057.0, 8134616.0, 7254464.0, 7889703.0, 8526882.0, 7741309.0, 8523760.0, 1.0130337E7, 9570375.0, 8261785.0, 6437251.0, 6961202.0, 7470969.0, 8885321.0, 7952766.0, 8360734.0, 9775719.0, 7554078.0, 8847637.0, 8491061.0, 7347352.0, 7755601.0, 8960722.0, 
7960421.0, 8470588.0, 8332189.0, 8444058.0, 8235295.0, 6839043.0, 7517756.0, 7415098.0, 8360872.0, 7000654.0, 8095598.0, 8937832.0, 5813282.0, 8713683.0, 1.0340755E7, 8893432.0, 8245456.0, 6941267.0, 7209275.0, 8630017.0, 9331110.0, 8897494.0, 7845643.0, 9026386.0, 8115773.0, 8895582.0, 8748333.0, 7461803.0, 7814024.0, 9201676.0
};