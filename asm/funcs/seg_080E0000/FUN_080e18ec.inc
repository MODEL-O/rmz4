@ FUN_080e18ec  entry 0x080e18ec  size 80
.thumb
.org 0xe18ec
FUN_080e18ec:
	push {r4, lr}	@ 000e18ec 10b5
.org 0xe18ee
	adds r4, r0, #0	@ 000e18ee 041c
.org 0xe18f0
	ldrb r0, [r4, #13]	@ 000e18f0 607b
.org 0xe18f2
	cmp r0, #0	@ 000e18f2 0028
.org 0xe18f4
	bne.n 0xe190c	@ 000e18f4 0ad1
.org 0xe18f6
	adds r0, r4, #0	@ 000e18f6 201c
.org 0xe18f8
	adds r0, #118	@ 000e18f8 7630
.org 0xe18fa
	ldrh r0, [r0, #0]	@ 000e18fa 0088
.org 0xe18fc
	movs r1, #10	@ 000e18fc 0a21
.org 0xe18fe
	orrs r1, r0	@ 000e18fe 0143
.org 0xe1900
	adds r0, r4, #0	@ 000e1900 201c
.org 0xe1902
	bl 0x1cf00	@ 000e1902 3bf7fdfa
.org 0xe1906
	ldrb r0, [r4, #13]	@ 000e1906 607b
.org 0xe1908
	adds r0, #1	@ 000e1908 0130
.org 0xe190a
	strb r0, [r4, #13]	@ 000e190a 6073
.org 0xe190c
	adds r0, r4, #0	@ 000e190c 201c
.org 0xe190e
	bl 0xe19e0	@ 000e190e 00f067f8
.org 0xe1912
	ldr r0, [r4, #84]	@ 000e1912 606d
.org 0xe1914
	ldr r1, [r4, #88]	@ 000e1914 a16d
.org 0xe1916
	ldr r2, [pc, #36]	@ 000e1916 094a
.org 0xe1918
	adds r1, r1, r2	@ 000e1918 8918
.org 0xe191a
	bl 0x7c7c	@ 000e191a 26f7aff9
.org 0xe191e
	lsls r0, r0, #16	@ 000e191e 0004
.org 0xe1920
	cmp r0, #0	@ 000e1920 0028
.org 0xe1922
	beq.n 0xe1936	@ 000e1922 08d0
.org 0xe1924
	ldr r1, [pc, #24]	@ 000e1924 0649
.org 0xe1926
	ldrb r0, [r4, #9]	@ 000e1926 607a
.org 0xe1928
	lsls r0, r0, #2	@ 000e1928 8000
.org 0xe192a
	adds r0, r0, r1	@ 000e192a 4018
.org 0xe192c
	movs r1, #2	@ 000e192c 0221
.org 0xe192e
	str r1, [r4, #12]	@ 000e192e e160
.org 0xe1930
	ldr r0, [r0, #0]	@ 000e1930 0068
.org 0xe1932
	ldr r0, [r0, #8]	@ 000e1932 8068
.org 0xe1934
	str r0, [r4, #20]	@ 000e1934 6061
.org 0xe1936
	pop {r4}	@ 000e1936 10bc
.org 0xe1938
	pop {r0}	@ 000e1938 01bc
.org 0xe193a
	bx r0	@ 000e193a 0047
