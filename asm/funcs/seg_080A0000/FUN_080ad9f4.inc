@ FUN_080ad9f4  entry 0x080ad9f4  size 220
.thumb
.org 0xad9f4
FUN_080ad9f4:
	push {r4, r5, r6, lr}	@ 000ad9f4 70b5
.org 0xad9f6
	adds r4, r0, #0	@ 000ad9f6 041c
.org 0xad9f8
	ldr r5, [pc, #40]	@ 000ad9f8 0a4d
.org 0xad9fa
	ldr r3, [r5, #0]	@ 000ad9fa 2b68
.org 0xad9fc
	adds r0, r3, #0	@ 000ad9fc 181c
.org 0xad9fe
	adds r0, #180	@ 000ad9fe b430
.org 0xada00
	ldr r2, [r0, #56]	@ 000ada00 826b
.org 0xada02
	cmp r2, #0	@ 000ada02 002a
.org 0xada04
	bne.n 0xada28	@ 000ada04 10d1
.org 0xada06
	adds r3, r4, #0	@ 000ada06 231c
.org 0xada08
	adds r3, #185	@ 000ada08 b933
.org 0xada0a
	ldrb r0, [r3, #0]	@ 000ada0a 1878
.org 0xada0c
	cmp r0, #1	@ 000ada0c 0128
.org 0xada0e
	bne.n 0xadad2	@ 000ada0e 60d1
.org 0xada10
	adds r0, r4, #0	@ 000ada10 201c
.org 0xada12
	adds r0, #188	@ 000ada12 bc30
.org 0xada14
	ldr r1, [r4, #88]	@ 000ada14 a16d
.org 0xada16
	str r1, [r0, #0]	@ 000ada16 0160
.org 0xada18
	str r2, [r4, #92]	@ 000ada18 e265
.org 0xada1a
	movs r0, #80	@ 000ada1a 5020
.org 0xada1c
	negs r0, r0	@ 000ada1c 4042
.org 0xada1e
	str r0, [r4, #96]	@ 000ada1e 2066
.org 0xada20
	strb r2, [r3, #0]	@ 000ada20 1a70
.org 0xada22
	b.n 0xadad2	@ 000ada22 56e0
.org 0xada24
	.byte 0xf0,0xdb,0x02,0x02	@ 000ada24 data
.org 0xada28
	ldr r0, [r3, #84]	@ 000ada28 586d
.org 0xada2a
	ldr r1, [r4, #84]	@ 000ada2a 616d
.org 0xada2c
	subs r0, r0, r1	@ 000ada2c 401a
.org 0xada2e
	asrs r0, r0, #8	@ 000ada2e 0012
.org 0xada30
	cmp r0, #0	@ 000ada30 0028
.org 0xada32
	bge.n 0xada36	@ 000ada32 00da
.org 0xada34
	negs r0, r0	@ 000ada34 4042
.org 0xada36
	cmp r0, #47	@ 000ada36 2f28
.org 0xada38
	bgt.n 0xadab4	@ 000ada38 3cdc
.org 0xada3a
	ldr r1, [r4, #88]	@ 000ada3a a16d
.org 0xada3c
	movs r0, #240	@ 000ada3c f020
.org 0xada3e
	lsls r0, r0, #4	@ 000ada3e 0001
.org 0xada40
	adds r1, r1, r0	@ 000ada40 0918
.org 0xada42
	ldr r0, [r3, #88]	@ 000ada42 986d
.org 0xada44
	subs r0, r0, r1	@ 000ada44 401a
.org 0xada46
	asrs r0, r0, #8	@ 000ada46 0012
.org 0xada48
	cmp r0, #0	@ 000ada48 0028
.org 0xada4a
	bge.n 0xada4e	@ 000ada4a 00da
.org 0xada4c
	negs r0, r0	@ 000ada4c 4042
.org 0xada4e
	cmp r0, #47	@ 000ada4e 2f28
.org 0xada50
	bgt.n 0xadab4	@ 000ada50 30dc
.org 0xada52
	adds r0, r4, #0	@ 000ada52 201c
.org 0xada54
	bl 0xadb98	@ 000ada54 00f0a0f8
.org 0xada58
	ldr r2, [pc, #84]	@ 000ada58 154a
.org 0xada5a
	adds r1, r0, #0	@ 000ada5a 011c
.org 0xada5c
	adds r1, #64	@ 000ada5c 4031
.org 0xada5e
	lsls r1, r1, #24	@ 000ada5e 0906
.org 0xada60
	lsrs r1, r1, #23	@ 000ada60 c90d
.org 0xada62
	adds r1, r1, r2	@ 000ada62 8918
.org 0xada64
	movs r6, #0	@ 000ada64 0026
.org 0xada66
	ldrsh r3, [r1, r6]	@ 000ada66 8b5f
.org 0xada68
	str r3, [r4, #92]	@ 000ada68 e365
.org 0xada6a
	lsls r0, r0, #24	@ 000ada6a 0006
.org 0xada6c
	lsrs r0, r0, #23	@ 000ada6c c00d
.org 0xada6e
	adds r0, r0, r2	@ 000ada6e 8018
.org 0xada70
	movs r1, #0	@ 000ada70 0021
.org 0xada72
	ldrsh r2, [r0, r1]	@ 000ada72 425e
.org 0xada74
	str r2, [r4, #96]	@ 000ada74 2266
.org 0xada76
	ldr r1, [r5, #0]	@ 000ada76 2968
.org 0xada78
	adds r1, #180	@ 000ada78 b431
.org 0xada7a
	adds r0, r4, #0	@ 000ada7a 201c
.org 0xada7c
	adds r0, #180	@ 000ada7c b430
.org 0xada7e
	ldr r0, [r0, #0]	@ 000ada7e 0068
.org 0xada80
	subs r0, #2	@ 000ada80 0238
.org 0xada82
	ldr r1, [r1, #56]	@ 000ada82 896b
.org 0xada84
	muls r0, r1	@ 000ada84 4843
.org 0xada86
	cmp r0, #0	@ 000ada86 0028
.org 0xada88
	bge.n 0xadaa6	@ 000ada88 0dda
.org 0xada8a
	lsls r0, r3, #8	@ 000ada8a 1802
.org 0xada8c
	negs r0, r0	@ 000ada8c 4042
.org 0xada8e
	cmp r0, #0	@ 000ada8e 0028
.org 0xada90
	bge.n 0xada94	@ 000ada90 00da
.org 0xada92
	adds r0, #255	@ 000ada92 ff30
.org 0xada94
	asrs r0, r0, #8	@ 000ada94 0012
.org 0xada96
	str r0, [r4, #92]	@ 000ada96 e065
.org 0xada98
	lsls r0, r2, #8	@ 000ada98 1002
.org 0xada9a
	negs r0, r0	@ 000ada9a 4042
.org 0xada9c
	cmp r0, #0	@ 000ada9c 0028
.org 0xada9e
	bge.n 0xadaa2	@ 000ada9e 00da
.org 0xadaa0
	adds r0, #255	@ 000adaa0 ff30
.org 0xadaa2
	asrs r0, r0, #8	@ 000adaa2 0012
.org 0xadaa4
	str r0, [r4, #96]	@ 000adaa4 2066
.org 0xadaa6
	adds r1, r4, #0	@ 000adaa6 211c
.org 0xadaa8
	adds r1, #185	@ 000adaa8 b931
.org 0xadaaa
	movs r0, #1	@ 000adaaa 0120
.org 0xadaac
	strb r0, [r1, #0]	@ 000adaac 0870
.org 0xadaae
	b.n 0xadad2	@ 000adaae 10e0
.org 0xadab0
	.byte 0x0c,0x93,0x12,0x08	@ 000adab0 data
.org 0xadab4
	adds r2, r4, #0	@ 000adab4 221c
.org 0xadab6
	adds r2, #185	@ 000adab6 b932
.org 0xadab8
	ldrb r0, [r2, #0]	@ 000adab8 1078
.org 0xadaba
	cmp r0, #1	@ 000adaba 0128
.org 0xadabc
	bne.n 0xadace	@ 000adabc 07d1
.org 0xadabe
	adds r1, r4, #0	@ 000adabe 211c
.org 0xadac0
	adds r1, #188	@ 000adac0 bc31
.org 0xadac2
	ldr r0, [r4, #88]	@ 000adac2 a06d
.org 0xadac4
	str r0, [r1, #0]	@ 000adac4 0860
.org 0xadac6
	movs r0, #0	@ 000adac6 0020
.org 0xadac8
	str r0, [r4, #92]	@ 000adac8 e065
.org 0xadaca
	subs r0, #80	@ 000adaca 5038
.org 0xadacc
	str r0, [r4, #96]	@ 000adacc 2066
.org 0xadace
	movs r0, #0	@ 000adace 0020
