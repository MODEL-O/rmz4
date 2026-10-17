@ FUN_0802003c  entry 0x0802003c  size 62
.thumb
.org 0x2003c
FUN_0802003c:
	push {r4, r5, lr}	@ 0002003c 30b5
.org 0x2003e
	movs r1, #190	@ 0002003e be21
.org 0x20040
	lsls r1, r1, #1	@ 00020040 4900
.org 0x20042
	adds r5, r0, r1	@ 00020042 4518
.org 0x20044
	ldrb r0, [r5, #0]	@ 00020044 2878
.org 0x20046
	cmp r0, #0	@ 00020046 0028
.org 0x20048
	bne.n 0x20072	@ 00020048 13d1
.org 0x2004a
	ldr r0, [pc, #48]	@ 0002004a 0c48
.org 0x2004c
	ldrh r1, [r0, #8]	@ 0002004c 0189
.org 0x2004e
	movs r4, #1	@ 0002004e 0124
.org 0x20050
	orrs r1, r4	@ 00020050 2143
.org 0x20052
	strh r1, [r0, #8]	@ 00020052 0181
.org 0x20054
	ldr r3, [pc, #40]	@ 00020054 0a4b
.org 0x20056
	ldrb r2, [r3, #4]	@ 00020056 1a79
.org 0x20058
	movs r1, #8	@ 00020058 0821
.org 0x2005a
	orrs r1, r2	@ 0002005a 1143
.org 0x2005c
	strb r1, [r3, #4]	@ 0002005c 1971
.org 0x2005e
	adds r0, #16	@ 0002005e 1030
.org 0x20060
	ldr r1, [pc, #32]	@ 00020060 0849
.org 0x20062
	ldr r1, [r1, #0]	@ 00020062 0968
.org 0x20064
	ldr r1, [r1, #0]	@ 00020064 0968
.org 0x20066
	bl 0x275f0	@ 00020066 07f0c3fa
.org 0x2006a
	movs r0, #0	@ 0002006a 0020
.org 0x2006c
	bl 0x1f63c	@ 0002006c fff7e6fa
.org 0x20070
	strb r4, [r5, #0]	@ 00020070 2c70
.org 0x20072
	movs r0, #0	@ 00020072 0020
.org 0x20074
	pop {r4, r5}	@ 00020074 30bc
.org 0x20076
	pop {r1}	@ 00020076 02bc
.org 0x20078
	bx r1	@ 00020078 0847
