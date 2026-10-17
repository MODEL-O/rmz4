@ FUN_08080c84  entry 0x08080c84  size 112
.thumb
.org 0x80c84
FUN_08080c84:
	push {r4, r5, lr}	@ 00080c84 30b5
.org 0x80c86
	adds r5, r0, #0	@ 00080c86 051c
.org 0x80c88
	ldrb r0, [r5, #15]	@ 00080c88 e87b
.org 0x80c8a
	cmp r0, #0	@ 00080c8a 0028
.org 0x80c8c
	bne.n 0x80c9c	@ 00080c8c 06d1
.org 0x80c8e
	ldr r1, [pc, #100]	@ 00080c8e 1949
.org 0x80c90
	adds r0, r5, #0	@ 00080c90 281c
.org 0x80c92
	bl 0x1cf00	@ 00080c92 9cf735f9
.org 0x80c96
	ldrb r0, [r5, #15]	@ 00080c96 e87b
.org 0x80c98
	adds r0, #1	@ 00080c98 0130
.org 0x80c9a
	strb r0, [r5, #15]	@ 00080c9a e873
.org 0x80c9c
	adds r0, r5, #0	@ 00080c9c 281c
.org 0x80c9e
	bl 0x1cff0	@ 00080c9e 9cf7a7f9
.org 0x80ca2
	adds r0, r5, #0	@ 00080ca2 281c
.org 0x80ca4
	adds r0, #116	@ 00080ca4 7430
.org 0x80ca6
	ldr r4, [pc, #80]	@ 00080ca6 144c
.org 0x80ca8
	adds r1, r5, #0	@ 00080ca8 291c
.org 0x80caa
	adds r1, #181	@ 00080caa b531
.org 0x80cac
	ldrb r3, [r1, #0]	@ 00080cac 0b78
.org 0x80cae
	lsls r3, r3, #2	@ 00080cae 9b00
.org 0x80cb0
	ldrb r1, [r5, #30]	@ 00080cb0 a97f
.org 0x80cb2
	lsls r1, r1, #8	@ 00080cb2 0902
.org 0x80cb4
	adds r2, r5, #0	@ 00080cb4 2a1c
.org 0x80cb6
	adds r2, #112	@ 00080cb6 7032
.org 0x80cb8
	ldrb r2, [r2, #0]	@ 00080cb8 1278
.org 0x80cba
	orrs r1, r2	@ 00080cba 1143
.org 0x80cbc
	ldr r2, [pc, #60]	@ 00080cbc 0f4a
.org 0x80cbe
	adds r1, r1, r2	@ 00080cbe 8918
.org 0x80cc0
	lsls r1, r1, #3	@ 00080cc0 c900
.org 0x80cc2
	adds r3, r3, r1	@ 00080cc2 5b18
.org 0x80cc4
	adds r3, r3, r4	@ 00080cc4 1b19
.org 0x80cc6
	adds r1, r5, #0	@ 00080cc6 291c
.org 0x80cc8
	adds r1, #113	@ 00080cc8 7131
.org 0x80cca
	ldrb r1, [r1, #0]	@ 00080cca 0978
.org 0x80ccc
	lsls r1, r1, #24	@ 00080ccc 0906
.org 0x80cce
	asrs r1, r1, #24	@ 00080cce 0916
.org 0x80cd0
	ldr r2, [r3, #0]	@ 00080cd0 1a68
.org 0x80cd2
	lsls r1, r1, #2	@ 00080cd2 8900
.org 0x80cd4
	adds r1, r1, r2	@ 00080cd4 8918
.org 0x80cd6
	ldr r1, [r1, #0]	@ 00080cd6 0968
.org 0x80cd8
	bl 0x5784	@ 00080cd8 84f754fd
.org 0x80cdc
	adds r0, r5, #0	@ 00080cdc 281c
.org 0x80cde
	adds r0, #115	@ 00080cde 7330
.org 0x80ce0
	ldrb r0, [r0, #0]	@ 00080ce0 0078
.org 0x80ce2
	cmp r0, #3	@ 00080ce2 0328
.org 0x80ce4
	bne.n 0x80cee	@ 00080ce4 03d1
.org 0x80ce6
	movs r1, #0	@ 00080ce6 0021
.org 0x80ce8
	movs r0, #5	@ 00080ce8 0520
.org 0x80cea
	strb r0, [r5, #14]	@ 00080cea a873
.org 0x80cec
	strb r1, [r5, #15]	@ 00080cec e973
.org 0x80cee
	pop {r4, r5}	@ 00080cee 30bc
.org 0x80cf0
	pop {r0}	@ 00080cf0 01bc
.org 0x80cf2
	bx r0	@ 00080cf2 0047
