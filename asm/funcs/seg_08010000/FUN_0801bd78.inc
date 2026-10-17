@ FUN_0801bd78  entry 0x0801bd78  size 174
.thumb
.org 0x1bd78
FUN_0801bd78:
	push {r4, r5, r6, lr}	@ 0001bd78 70b5
.org 0x1bd7a
	adds r5, r0, #0	@ 0001bd7a 051c
.org 0x1bd7c
	ldr r0, [r5, #92]	@ 0001bd7c e86d
.org 0x1bd7e
	lsls r0, r0, #16	@ 0001bd7e 0004
.org 0x1bd80
	ldrb r6, [r5, #14]	@ 0001bd80 ae7b
.org 0x1bd82
	cmp r6, #0	@ 0001bd82 002e
.org 0x1bd84
	bne.n 0x1bddc	@ 0001bd84 2ad1
.org 0x1bd86
	lsrs r3, r0, #20	@ 0001bd86 030d
.org 0x1bd88
	lsls r2, r3, #1	@ 0001bd88 5a00
.org 0x1bd8a
	ldr r4, [pc, #156]	@ 0001bd8a 274c
.org 0x1bd8c
	adds r2, r2, r4	@ 0001bd8c 1219
.org 0x1bd8e
	ldr r1, [r5, #100]	@ 0001bd8e 696e
.org 0x1bd90
	movs r0, #69	@ 0001bd90 4520
.org 0x1bd92
	orrs r1, r0	@ 0001bd92 0143
.org 0x1bd94
	strh r1, [r2, #0]	@ 0001bd94 1180
.org 0x1bd96
	lsls r3, r3, #2	@ 0001bd96 9b00
.org 0x1bd98
	adds r4, #8	@ 0001bd98 0834
.org 0x1bd9a
	adds r3, r3, r4	@ 0001bd9a 1b19
.org 0x1bd9c
	str r6, [r3, #0]	@ 0001bd9c 1e60
.org 0x1bd9e
	ldr r0, [pc, #140]	@ 0001bd9e 2348
.org 0x1bda0
	ldr r0, [r0, #0]	@ 0001bda0 0068
.org 0x1bda2
	ldr r2, [pc, #140]	@ 0001bda2 234a
.org 0x1bda4
	adds r0, r0, r2	@ 0001bda4 8018
.org 0x1bda6
	movs r2, #248	@ 0001bda6 f822
.org 0x1bda8
	lsls r2, r2, #5	@ 0001bda8 5201
.org 0x1bdaa
	ands r1, r2	@ 0001bdaa 1140
.org 0x1bdac
	lsls r1, r1, #3	@ 0001bdac c900
.org 0x1bdae
	movs r2, #192	@ 0001bdae c022
.org 0x1bdb0
	lsls r2, r2, #19	@ 0001bdb0 d204
.org 0x1bdb2
	adds r1, r1, r2	@ 0001bdb2 8918
.org 0x1bdb4
	movs r2, #128	@ 0001bdb4 8022
.org 0x1bdb6
	lsls r2, r2, #2	@ 0001bdb6 9200
.org 0x1bdb8
	bl 0x128be0	@ 0001bdb8 0cf112ff
.org 0x1bdbc
	adds r0, r5, #0	@ 0001bdbc 281c
.org 0x1bdbe
	adds r0, #104	@ 0001bdbe 6830
.org 0x1bdc0
	strh r6, [r0, #0]	@ 0001bdc0 0680
.org 0x1bdc2
	adds r0, #2	@ 0001bdc2 0230
.org 0x1bdc4
	strh r6, [r0, #0]	@ 0001bdc4 0680
.org 0x1bdc6
	strh r6, [r5, #16]	@ 0001bdc6 2e82
.org 0x1bdc8
	strh r6, [r5, #18]	@ 0001bdc8 6e82
.org 0x1bdca
	ldr r1, [pc, #104]	@ 0001bdca 1a49
.org 0x1bdcc
	ldr r0, [pc, #104]	@ 0001bdcc 1a48
.org 0x1bdce
	strh r0, [r1, #0]	@ 0001bdce 0880
.org 0x1bdd0
	movs r0, #128	@ 0001bdd0 8020
.org 0x1bdd2
	lsls r0, r0, #5	@ 0001bdd2 4001
.org 0x1bdd4
	strh r0, [r1, #2]	@ 0001bdd4 4880
.org 0x1bdd6
	ldrb r0, [r5, #14]	@ 0001bdd6 a87b
.org 0x1bdd8
	adds r0, #1	@ 0001bdd8 0130
.org 0x1bdda
	strb r0, [r5, #14]	@ 0001bdda a873
.org 0x1bddc
	ldr r1, [pc, #92]	@ 0001bddc 1749
.org 0x1bdde
	ldr r0, [pc, #96]	@ 0001bdde 1848
.org 0x1bde0
	ldr r3, [pc, #96]	@ 0001bde0 184b
.org 0x1bde2
	adds r0, r0, r3	@ 0001bde2 c018
.org 0x1bde4
	ldrb r0, [r0, #0]	@ 0001bde4 0078
.org 0x1bde6
	lsls r0, r0, #2	@ 0001bde6 8000
.org 0x1bde8
	adds r0, r0, r1	@ 0001bde8 4018
.org 0x1bdea
	ldr r1, [r0, #0]	@ 0001bdea 0168
.org 0x1bdec
	adds r0, r5, #0	@ 0001bdec 281c
.org 0x1bdee
	bl 0x128f80	@ 0001bdee 0df1c7f8
.org 0x1bdf2
	ldr r2, [pc, #84]	@ 0001bdf2 154a
.org 0x1bdf4
	ldrh r1, [r2, #8]	@ 0001bdf4 1189
.org 0x1bdf6
	movs r0, #8	@ 0001bdf6 0820
.org 0x1bdf8
	ands r0, r1	@ 0001bdf8 0840
.org 0x1bdfa
	cmp r0, #0	@ 0001bdfa 0028
.org 0x1bdfc
	bne.n 0x1be20	@ 0001bdfc 10d1
.org 0x1bdfe
	ldrb r1, [r2, #18]	@ 0001bdfe 917c
.org 0x1be00
	movs r0, #1	@ 0001be00 0120
.org 0x1be02
	ands r0, r1	@ 0001be02 0840
.org 0x1be04
	cmp r0, #0	@ 0001be04 0028
.org 0x1be06
	bne.n 0x1be20	@ 0001be06 0bd1
.org 0x1be08
	ldr r0, [pc, #64]	@ 0001be08 1048
.org 0x1be0a
	ldr r1, [r0, #0]	@ 0001be0a 0168
.org 0x1be0c
	movs r0, #222	@ 0001be0c de20
.org 0x1be0e
	lsls r0, r0, #1	@ 0001be0e 4000
.org 0x1be10
	adds r1, r1, r0	@ 0001be10 0918
.org 0x1be12
	adds r0, r5, #0	@ 0001be12 281c
.org 0x1be14
	adds r0, #106	@ 0001be14 6a30
.org 0x1be16
	movs r3, #0	@ 0001be16 0023
.org 0x1be18
	ldrsh r2, [r0, r3]	@ 0001be18 c25e
.org 0x1be1a
	ldr r0, [r1, #0]	@ 0001be1a 0868
.org 0x1be1c
	adds r0, r0, r2	@ 0001be1c 8018
.org 0x1be1e
	str r0, [r1, #0]	@ 0001be1e 0860
.org 0x1be20
	pop {r4, r5, r6}	@ 0001be20 70bc
.org 0x1be22
	pop {r0}	@ 0001be22 01bc
.org 0x1be24
	bx r0	@ 0001be24 0047
