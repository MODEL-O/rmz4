@ FUN_080b1820  entry 0x080b1820  size 152
.thumb
.org 0xb1820
FUN_080b1820:
	push {r4, r5, lr}	@ 000b1820 30b5
.org 0xb1822
	adds r5, r0, #0	@ 000b1822 051c
.org 0xb1824
	adds r0, #180	@ 000b1824 b430
.org 0xb1826
	ldrb r0, [r0, #0]	@ 000b1826 0078
.org 0xb1828
	cmp r0, #0	@ 000b1828 0028
.org 0xb182a
	bne.n 0xb186a	@ 000b182a 1ed1
.org 0xb182c
	adds r0, r5, #0	@ 000b182c 281c
.org 0xb182e
	adds r0, #140	@ 000b182e 8c30
.org 0xb1830
	ldr r0, [r0, #0]	@ 000b1830 0068
.org 0xb1832
	movs r1, #128	@ 000b1832 8021
.org 0xb1834
	lsls r1, r1, #9	@ 000b1834 4902
.org 0xb1836
	ands r0, r1	@ 000b1836 0840
.org 0xb1838
	cmp r0, #0	@ 000b1838 0028
.org 0xb183a
	beq.n 0xb1852	@ 000b183a 0ad0
.org 0xb183c
	adds r4, r5, #0	@ 000b183c 2c1c
.org 0xb183e
	adds r4, #84	@ 000b183e 5434
.org 0xb1840
	ldrb r2, [r5, #10]	@ 000b1840 aa7a
.org 0xb1842
	lsrs r2, r2, #4	@ 000b1842 1209
.org 0xb1844
	movs r0, #1	@ 000b1844 0120
.org 0xb1846
	ands r2, r0	@ 000b1846 0240
.org 0xb1848
	adds r0, r4, #0	@ 000b1848 201c
.org 0xb184a
	movs r1, #0	@ 000b184a 0021
.org 0xb184c
	bl 0xe56d0	@ 000b184c 33f040ff
.org 0xb1850
	b.n 0xb1880	@ 000b1850 16e0
.org 0xb1852
	adds r4, r5, #0	@ 000b1852 2c1c
.org 0xb1854
	adds r4, #84	@ 000b1854 5434
.org 0xb1856
	movs r1, #128	@ 000b1856 8021
.org 0xb1858
	lsls r1, r1, #1	@ 000b1858 4900
.org 0xb185a
	ldrb r2, [r5, #10]	@ 000b185a aa7a
.org 0xb185c
	lsrs r2, r2, #4	@ 000b185c 1209
.org 0xb185e
	movs r0, #1	@ 000b185e 0120
.org 0xb1860
	ands r2, r0	@ 000b1860 0240
.org 0xb1862
	adds r0, r4, #0	@ 000b1862 201c
.org 0xb1864
	bl 0xe56d0	@ 000b1864 33f034ff
.org 0xb1868
	b.n 0xb1880	@ 000b1868 0ae0
.org 0xb186a
	adds r4, r5, #0	@ 000b186a 2c1c
.org 0xb186c
	adds r4, #84	@ 000b186c 5434
.org 0xb186e
	movs r1, #128	@ 000b186e 8021
.org 0xb1870
	lsls r1, r1, #2	@ 000b1870 8900
.org 0xb1872
	ldrb r2, [r5, #10]	@ 000b1872 aa7a
.org 0xb1874
	lsrs r2, r2, #4	@ 000b1874 1209
.org 0xb1876
	movs r0, #1	@ 000b1876 0120
.org 0xb1878
	ands r2, r0	@ 000b1878 0240
.org 0xb187a
	adds r0, r4, #0	@ 000b187a 201c
.org 0xb187c
	bl 0xe56d0	@ 000b187c 33f028ff
.org 0xb1880
	ldr r2, [pc, #52]	@ 000b1880 0d4a
.org 0xb1882
	ldrh r1, [r2, #12]	@ 000b1882 9189
.org 0xb1884
	ldr r0, [pc, #52]	@ 000b1884 0d48
.org 0xb1886
	cmp r1, r0	@ 000b1886 8142
.org 0xb1888
	bhi.n 0xb188e	@ 000b1888 01d8
.org 0xb188a
	adds r0, r1, #1	@ 000b188a 481c
.org 0xb188c
	strh r0, [r2, #12]	@ 000b188c 9081
.org 0xb188e
	adds r0, r5, #0	@ 000b188e 281c
.org 0xb1890
	adds r1, r4, #0	@ 000b1890 211c
.org 0xb1892
	bl 0x2abe0	@ 000b1892 79f7a5f9
.org 0xb1896
	movs r0, #3	@ 000b1896 0320
.org 0xb1898
	movs r1, #1	@ 000b1898 0121
.org 0xb189a
	adds r2, r4, #0	@ 000b189a 221c
.org 0xb189c
	bl 0x2ab88	@ 000b189c 79f774f9
.org 0xb18a0
	ldr r1, [pc, #28]	@ 000b18a0 0749
.org 0xb18a2
	ldrb r0, [r5, #9]	@ 000b18a2 687a
.org 0xb18a4
	lsls r0, r0, #2	@ 000b18a4 8000
.org 0xb18a6
	adds r0, r0, r1	@ 000b18a6 4018
.org 0xb18a8
	movs r1, #4	@ 000b18a8 0421
.org 0xb18aa
	str r1, [r5, #12]	@ 000b18aa e960
.org 0xb18ac
	ldr r0, [r0, #0]	@ 000b18ac 0068
.org 0xb18ae
	ldr r0, [r0, #16]	@ 000b18ae 0069
.org 0xb18b0
	str r0, [r5, #20]	@ 000b18b0 6861
.org 0xb18b2
	pop {r4, r5}	@ 000b18b2 30bc
.org 0xb18b4
	pop {r0}	@ 000b18b4 01bc
.org 0xb18b6
	bx r0	@ 000b18b6 0047
