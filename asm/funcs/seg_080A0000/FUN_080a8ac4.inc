@ FUN_080a8ac4  entry 0x080a8ac4  size 130
.thumb
.org 0xa8ac4
FUN_080a8ac4:
	push {r4, r5, lr}	@ 000a8ac4 30b5
.org 0xa8ac6
	adds r4, r0, #0	@ 000a8ac6 041c
.org 0xa8ac8
	bl 0x1cc9c	@ 000a8ac8 74f7e8f8
.org 0xa8acc
	ldrb r1, [r4, #10]	@ 000a8acc a17a
.org 0xa8ace
	movs r0, #1	@ 000a8ace 0120
.org 0xa8ad0
	orrs r0, r1	@ 000a8ad0 0843
.org 0xa8ad2
	movs r1, #2	@ 000a8ad2 0221
.org 0xa8ad4
	orrs r0, r1	@ 000a8ad4 0843
.org 0xa8ad6
	strb r0, [r4, #10]	@ 000a8ad6 a072
.org 0xa8ad8
	adds r0, r4, #0	@ 000a8ad8 201c
.org 0xa8ada
	adds r0, #34	@ 000a8ada 2230
.org 0xa8adc
	movs r5, #1	@ 000a8adc 0125
.org 0xa8ade
	strb r5, [r0, #0]	@ 000a8ade 0570
.org 0xa8ae0
	ldr r1, [pc, #100]	@ 000a8ae0 1949
.org 0xa8ae2
	adds r0, r4, #0	@ 000a8ae2 201c
.org 0xa8ae4
	bl 0x1cf00	@ 000a8ae4 74f70cfa
.org 0xa8ae8
	adds r0, r4, #0	@ 000a8ae8 201c
.org 0xa8aea
	bl 0x1cff0	@ 000a8aea 74f781fa
.org 0xa8aee
	movs r2, #0	@ 000a8aee 0022
.org 0xa8af0
	ldrb r1, [r4, #10]	@ 000a8af0 a17a
.org 0xa8af2
	movs r0, #239	@ 000a8af2 ef20
.org 0xa8af4
	ands r0, r1	@ 000a8af4 0840
.org 0xa8af6
	strb r0, [r4, #10]	@ 000a8af6 a072
.org 0xa8af8
	adds r0, r4, #0	@ 000a8af8 201c
.org 0xa8afa
	adds r0, #76	@ 000a8afa 4c30
.org 0xa8afc
	strb r2, [r0, #0]	@ 000a8afc 0270
.org 0xa8afe
	adds r2, r4, #0	@ 000a8afe 221c
.org 0xa8b00
	adds r2, #74	@ 000a8b00 4a32
.org 0xa8b02
	ldrb r1, [r2, #0]	@ 000a8b02 1178
.org 0xa8b04
	movs r0, #17	@ 000a8b04 1120
.org 0xa8b06
	negs r0, r0	@ 000a8b06 4042
.org 0xa8b08
	ands r0, r1	@ 000a8b08 0840
.org 0xa8b0a
	strb r0, [r2, #0]	@ 000a8b0a 1070
.org 0xa8b0c
	adds r1, r4, #0	@ 000a8b0c 211c
.org 0xa8b0e
	adds r1, #37	@ 000a8b0e 2531
.org 0xa8b10
	movs r0, #22	@ 000a8b10 1620
.org 0xa8b12
	strb r0, [r1, #0]	@ 000a8b12 0870
.org 0xa8b14
	ldr r0, [r4, #40]	@ 000a8b14 a06a
.org 0xa8b16
	ldrb r2, [r4, #17]	@ 000a8b16 627c
.org 0xa8b18
	adds r1, r4, #0	@ 000a8b18 211c
.org 0xa8b1a
	bl 0xa8884	@ 000a8b1a fff7b3fe
.org 0xa8b1e
	ldr r0, [r4, #40]	@ 000a8b1e a06a
.org 0xa8b20
	ldr r2, [r4, #44]	@ 000a8b20 e26a
.org 0xa8b22
	ldrb r3, [r4, #17]	@ 000a8b22 637c
.org 0xa8b24
	adds r1, r4, #0	@ 000a8b24 211c
.org 0xa8b26
	bl 0xa88e8	@ 000a8b26 fff7dffe
.org 0xa8b2a
	ldr r1, [pc, #32]	@ 000a8b2a 0849
.org 0xa8b2c
	ldrb r0, [r4, #9]	@ 000a8b2c 607a
.org 0xa8b2e
	lsls r0, r0, #2	@ 000a8b2e 8000
.org 0xa8b30
	adds r0, r0, r1	@ 000a8b30 4018
.org 0xa8b32
	str r5, [r4, #12]	@ 000a8b32 e560
.org 0xa8b34
	ldr r0, [r0, #0]	@ 000a8b34 0068
.org 0xa8b36
	ldr r0, [r0, #4]	@ 000a8b36 4068
.org 0xa8b38
	str r0, [r4, #20]	@ 000a8b38 6061
.org 0xa8b3a
	adds r0, r4, #0	@ 000a8b3a 201c
.org 0xa8b3c
	bl 0xa896c	@ 000a8b3c fff716ff
.org 0xa8b40
	pop {r4, r5}	@ 000a8b40 30bc
.org 0xa8b42
	pop {r0}	@ 000a8b42 01bc
.org 0xa8b44
	bx r0	@ 000a8b44 0047
