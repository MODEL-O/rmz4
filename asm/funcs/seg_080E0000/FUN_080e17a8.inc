@ FUN_080e17a8  entry 0x080e17a8  size 230
.thumb
.org 0xe17a8
FUN_080e17a8:
	push {r4, r5, r6, lr}	@ 000e17a8 70b5
.org 0xe17aa
	sub sp, #8	@ 000e17aa 82b0
.org 0xe17ac
	adds r5, r0, #0	@ 000e17ac 051c
.org 0xe17ae
	ldr r0, [pc, #112]	@ 000e17ae 1c48
.org 0xe17b0
	ldr r1, [r0, #4]	@ 000e17b0 4168
.org 0xe17b2
	ldr r0, [r0, #0]	@ 000e17b2 0068
.org 0xe17b4
	str r0, [sp, #0]	@ 000e17b4 0090
.org 0xe17b6
	str r1, [sp, #4]	@ 000e17b6 0191
.org 0xe17b8
	ldrb r0, [r5, #17]	@ 000e17b8 687c
.org 0xe17ba
	cmp r0, #0	@ 000e17ba 0028
.org 0xe17bc
	bne.n 0xe1824	@ 000e17bc 32d1
.org 0xe17be
	ldr r0, [r5, #84]	@ 000e17be 686d
.org 0xe17c0
	ldr r1, [sp, #0]	@ 000e17c0 0099
.org 0xe17c2
	adds r0, r0, r1	@ 000e17c2 4018
.org 0xe17c4
	str r0, [sp, #0]	@ 000e17c4 0090
.org 0xe17c6
	ldr r0, [r5, #88]	@ 000e17c6 a86d
.org 0xe17c8
	ldr r1, [sp, #4]	@ 000e17c8 0199
.org 0xe17ca
	adds r0, r0, r1	@ 000e17ca 4018
.org 0xe17cc
	str r0, [sp, #4]	@ 000e17cc 0190
.org 0xe17ce
	movs r0, #1	@ 000e17ce 0120
.org 0xe17d0
	mov r1, sp	@ 000e17d0 6946
.org 0xe17d2
	bl 0xd0c88	@ 000e17d2 eff759fa
.org 0xe17d6
	movs r0, #42	@ 000e17d6 2a20
.org 0xe17d8
	bl 0x2b10	@ 000e17d8 21f79af9
.org 0xe17dc
	adds r4, r5, #0	@ 000e17dc 2c1c
.org 0xe17de
	adds r4, #84	@ 000e17de 5434
.org 0xe17e0
	adds r6, r5, #0	@ 000e17e0 2e1c
.org 0xe17e2
	adds r6, #117	@ 000e17e2 7536
.org 0xe17e4
	ldrb r1, [r6, #0]	@ 000e17e4 3178
.org 0xe17e6
	adds r1, #3	@ 000e17e6 0331
.org 0xe17e8
	lsls r1, r1, #24	@ 000e17e8 0906
.org 0xe17ea
	lsrs r1, r1, #24	@ 000e17ea 090e
.org 0xe17ec
	adds r0, r4, #0	@ 000e17ec 201c
.org 0xe17ee
	movs r2, #3	@ 000e17ee 0322
.org 0xe17f0
	bl 0xe1508	@ 000e17f0 fff78afe
.org 0xe17f4
	ldrb r1, [r6, #0]	@ 000e17f4 3178
.org 0xe17f6
	adds r1, #3	@ 000e17f6 0331
.org 0xe17f8
	lsls r1, r1, #24	@ 000e17f8 0906
.org 0xe17fa
	lsrs r1, r1, #24	@ 000e17fa 090e
.org 0xe17fc
	adds r0, r4, #0	@ 000e17fc 201c
.org 0xe17fe
	movs r2, #4	@ 000e17fe 0422
.org 0xe1800
	bl 0xe1508	@ 000e1800 fff782fe
.org 0xe1804
	ldr r0, [r5, #84]	@ 000e1804 686d
.org 0xe1806
	movs r1, #128	@ 000e1806 8021
.org 0xe1808
	lsls r1, r1, #6	@ 000e1808 8901
.org 0xe180a
	adds r0, r0, r1	@ 000e180a 4018
.org 0xe180c
	str r0, [r5, #84]	@ 000e180c 6865
.org 0xe180e
	ldrb r1, [r6, #0]	@ 000e180e 3178
.org 0xe1810
	adds r1, #3	@ 000e1810 0331
.org 0xe1812
	lsls r1, r1, #24	@ 000e1812 0906
.org 0xe1814
	lsrs r1, r1, #24	@ 000e1814 090e
.org 0xe1816
	adds r0, r4, #0	@ 000e1816 201c
.org 0xe1818
	movs r2, #5	@ 000e1818 0522
.org 0xe181a
	bl 0xe1508	@ 000e181a fff775fe
.org 0xe181e
	b.n 0xe1876	@ 000e181e 2ae0
.org 0xe1820
	.byte 0xa0,0xa2,0x12,0x08	@ 000e1820 data
.org 0xe1824
	cmp r0, #1	@ 000e1824 0128
.org 0xe1826
	bne.n 0xe186c	@ 000e1826 21d1
.org 0xe1828
	ldr r0, [sp, #0]	@ 000e1828 0098
.org 0xe182a
	ldr r1, [r5, #84]	@ 000e182a 696d
.org 0xe182c
	adds r0, r0, r1	@ 000e182c 4018
.org 0xe182e
	str r0, [sp, #0]	@ 000e182e 0090
.org 0xe1830
	ldr r0, [sp, #4]	@ 000e1830 0198
.org 0xe1832
	ldr r1, [r5, #88]	@ 000e1832 a96d
.org 0xe1834
	adds r0, r0, r1	@ 000e1834 4018
.org 0xe1836
	str r0, [sp, #4]	@ 000e1836 0190
.org 0xe1838
	movs r0, #1	@ 000e1838 0120
.org 0xe183a
	mov r1, sp	@ 000e183a 6946
.org 0xe183c
	bl 0xd0c88	@ 000e183c eff724fa
.org 0xe1840
	movs r0, #42	@ 000e1840 2a20
.org 0xe1842
	bl 0x2b10	@ 000e1842 21f765f9
.org 0xe1846
	adds r0, r5, #0	@ 000e1846 281c
.org 0xe1848
	adds r0, #84	@ 000e1848 5430
.org 0xe184a
	adds r1, r5, #0	@ 000e184a 291c
.org 0xe184c
	adds r1, #117	@ 000e184c 7531
.org 0xe184e
	ldrb r1, [r1, #0]	@ 000e184e 0978
.org 0xe1850
	adds r1, #3	@ 000e1850 0331
.org 0xe1852
	lsls r1, r1, #24	@ 000e1852 0906
.org 0xe1854
	lsrs r1, r1, #24	@ 000e1854 090e
.org 0xe1856
	movs r2, #2	@ 000e1856 0222
.org 0xe1858
	bl 0xe1508	@ 000e1858 fff756fe
.org 0xe185c
	ldr r0, [r5, #88]	@ 000e185c a86d
.org 0xe185e
	ldr r1, [pc, #8]	@ 000e185e 0249
.org 0xe1860
	adds r0, r0, r1	@ 000e1860 4018
.org 0xe1862
	str r0, [r5, #88]	@ 000e1862 a865
.org 0xe1864
	b.n 0xe1876	@ 000e1864 07e0
.org 0xe1866
	.byte 0x00	@ 000e1866 data
.org 0xe1867
	.byte 0x00	@ 000e1867 data
.org 0xe1868
	.byte 0x00,0xec,0xff,0xff	@ 000e1868 data
.org 0xe186c
	adds r1, r5, #0	@ 000e186c 291c
.org 0xe186e
	adds r1, #84	@ 000e186e 5431
.org 0xe1870
	movs r0, #3	@ 000e1870 0320
.org 0xe1872
	bl 0xd0c88	@ 000e1872 eff709fa
.org 0xe1876
	ldrb r1, [r5, #10]	@ 000e1876 a97a
.org 0xe1878
	movs r0, #254	@ 000e1878 fe20
.org 0xe187a
	ands r0, r1	@ 000e187a 0840
.org 0xe187c
	strb r0, [r5, #10]	@ 000e187c a872
.org 0xe187e
	ldr r1, [pc, #24]	@ 000e187e 0649
.org 0xe1880
	ldrb r0, [r5, #9]	@ 000e1880 687a
.org 0xe1882
	lsls r0, r0, #2	@ 000e1882 8000
.org 0xe1884
	adds r0, r0, r1	@ 000e1884 4018
.org 0xe1886
	movs r1, #4	@ 000e1886 0421
.org 0xe1888
	str r1, [r5, #12]	@ 000e1888 e960
.org 0xe188a
	ldr r0, [r0, #0]	@ 000e188a 0068
.org 0xe188c
	ldr r0, [r0, #16]	@ 000e188c 0069
