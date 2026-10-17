@ FUN_080b1910  entry 0x080b1910  size 66
.thumb
.org 0xb1910
FUN_080b1910:
	push {r4, lr}	@ 000b1910 10b5
.org 0xb1912
	adds r4, r0, #0	@ 000b1912 041c
.org 0xb1914
	ldrb r0, [r4, #14]	@ 000b1914 a07b
.org 0xb1916
	cmp r0, #0	@ 000b1916 0028
.org 0xb1918
	bne.n 0xb1938	@ 000b1918 0ed1
.org 0xb191a
	movs r0, #90	@ 000b191a 5a20
.org 0xb191c
	strb r0, [r4, #18]	@ 000b191c a074
.org 0xb191e
	movs r1, #187	@ 000b191e bb21
.org 0xb1920
	lsls r1, r1, #8	@ 000b1920 0902
.org 0xb1922
	adds r0, r4, #0	@ 000b1922 201c
.org 0xb1924
	bl 0x1cf00	@ 000b1924 6bf7ecfa
.org 0xb1928
	adds r0, r4, #0	@ 000b1928 201c
.org 0xb192a
	adds r0, #116	@ 000b192a 7430
.org 0xb192c
	ldr r1, [pc, #36]	@ 000b192c 0949
.org 0xb192e
	bl 0x5784	@ 000b192e 53f729ff
.org 0xb1932
	ldrb r0, [r4, #14]	@ 000b1932 a07b
.org 0xb1934
	adds r0, #1	@ 000b1934 0130
.org 0xb1936
	strb r0, [r4, #14]	@ 000b1936 a073
.org 0xb1938
	adds r0, r4, #0	@ 000b1938 201c
.org 0xb193a
	bl 0xb1a8c	@ 000b193a 00f0a7f8
.org 0xb193e
	lsls r0, r0, #24	@ 000b193e 0006
.org 0xb1940
	cmp r0, #0	@ 000b1940 0028
.org 0xb1942
	beq.n 0xb194c	@ 000b1942 03d0
.org 0xb1944
	movs r1, #0	@ 000b1944 0021
.org 0xb1946
	movs r0, #1	@ 000b1946 0120
.org 0xb1948
	strb r0, [r4, #13]	@ 000b1948 6073
.org 0xb194a
	strb r1, [r4, #14]	@ 000b194a a173
.org 0xb194c
	pop {r4}	@ 000b194c 10bc
.org 0xb194e
	pop {r0}	@ 000b194e 01bc
.org 0xb1950
	bx r0	@ 000b1950 0047
