@ FUN_080d1804  entry 0x080d1804  size 114
.thumb
.org 0xd1804
FUN_080d1804:
	push {r4, r5, lr}	@ 000d1804 30b5
.org 0xd1806
	adds r4, r0, #0	@ 000d1806 041c
.org 0xd1808
	adds r0, #52	@ 000d1808 3430
.org 0xd180a
	ldr r1, [pc, #108]	@ 000d180a 1b49
.org 0xd180c
	bl 0x2c94	@ 000d180c 31f742fa
.org 0xd1810
	str r4, [r4, #60]	@ 000d1810 e463
.org 0xd1812
	ldrb r1, [r4, #10]	@ 000d1812 a17a
.org 0xd1814
	movs r0, #247	@ 000d1814 f720
.org 0xd1816
	ands r0, r1	@ 000d1816 0840
.org 0xd1818
	movs r5, #0	@ 000d1818 0025
.org 0xd181a
	movs r1, #1	@ 000d181a 0121
.org 0xd181c
	orrs r0, r1	@ 000d181c 0843
.org 0xd181e
	strb r0, [r4, #10]	@ 000d181e a072
.org 0xd1820
	ldr r0, [pc, #88]	@ 000d1820 1648
.org 0xd1822
	ldr r1, [pc, #92]	@ 000d1822 1749
.org 0xd1824
	ldrh r1, [r1, #6]	@ 000d1824 c988
.org 0xd1826
	ldrh r2, [r0, #6]	@ 000d1826 c288
.org 0xd1828
	lsrs r2, r2, #6	@ 000d1828 9209
.org 0xd182a
	subs r1, r1, r2	@ 000d182a 891a
.org 0xd182c
	lsls r1, r1, #5	@ 000d182c 4901
.org 0xd182e
	movs r2, #128	@ 000d182e 8022
.org 0xd1830
	lsls r2, r2, #9	@ 000d1830 5202
.org 0xd1832
	adds r1, r1, r2	@ 000d1832 8918
.org 0xd1834
	bl 0x1d30	@ 000d1834 30f77cfa
.org 0xd1838
	ldr r0, [pc, #72]	@ 000d1838 1248
.org 0xd183a
	ldr r1, [pc, #76]	@ 000d183a 1349
.org 0xd183c
	ldrh r1, [r1, #6]	@ 000d183c c988
.org 0xd183e
	ldrb r2, [r0, #7]	@ 000d183e c279
.org 0xd1840
	subs r1, r1, r2	@ 000d1840 891a
.org 0xd1842
	lsls r1, r1, #5	@ 000d1842 4901
.org 0xd1844
	movs r2, #128	@ 000d1844 8022
.org 0xd1846
	lsls r2, r2, #2	@ 000d1846 9200
.org 0xd1848
	adds r1, r1, r2	@ 000d1848 8918
.org 0xd184a
	bl 0x2208	@ 000d184a 30f7ddfc
.org 0xd184e
	str r5, [r4, #84]	@ 000d184e 6565
.org 0xd1850
	movs r0, #148	@ 000d1850 9420
.org 0xd1852
	lsls r0, r0, #8	@ 000d1852 0002
.org 0xd1854
	str r0, [r4, #88]	@ 000d1854 a065
.org 0xd1856
	ldr r1, [pc, #52]	@ 000d1856 0d49
.org 0xd1858
	ldrb r0, [r4, #9]	@ 000d1858 607a
.org 0xd185a
	lsls r0, r0, #2	@ 000d185a 8000
.org 0xd185c
	adds r0, r0, r1	@ 000d185c 4018
.org 0xd185e
	movs r1, #1	@ 000d185e 0121
.org 0xd1860
	str r1, [r4, #12]	@ 000d1860 e160
.org 0xd1862
	ldr r0, [r0, #0]	@ 000d1862 0068
.org 0xd1864
	ldr r0, [r0, #4]	@ 000d1864 4068
.org 0xd1866
	str r0, [r4, #20]	@ 000d1866 6061
.org 0xd1868
	strb r5, [r4, #18]	@ 000d1868 a574
.org 0xd186a
	adds r0, r4, #0	@ 000d186a 201c
.org 0xd186c
	bl 0xd1890	@ 000d186c 00f010f8
.org 0xd1870
	pop {r4, r5}	@ 000d1870 30bc
.org 0xd1872
	pop {r0}	@ 000d1872 01bc
.org 0xd1874
	bx r0	@ 000d1874 0047
