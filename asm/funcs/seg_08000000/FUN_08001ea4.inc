@ FUN_08001ea4  entry 0x08001ea4  size 114
.thumb
.org 0x1ea4
FUN_08001ea4:
	push {r4, r5, r6, lr}	@ 00001ea4 70b5
.org 0x1ea6
	adds r6, r0, #0	@ 00001ea6 061c
.org 0x1ea8
	adds r5, r1, #0	@ 00001ea8 0d1c
.org 0x1eaa
	movs r2, #0	@ 00001eaa 0022
.org 0x1eac
	ldr r0, [pc, #52]	@ 00001eac 0d48
.org 0x1eae
	ldr r4, [r0, #0]	@ 00001eae 0468
.org 0x1eb0
	mov ip, r0	@ 00001eb0 8446
.org 0x1eb2
	cmp r2, r4	@ 00001eb2 a242
.org 0x1eb4
	bcs.n 0x1ed4	@ 00001eb4 0ed2
.org 0x1eb6
	mov r3, ip	@ 00001eb6 6346
.org 0x1eb8
	adds r3, #8	@ 00001eb8 0833
.org 0x1eba
	mov r1, ip	@ 00001eba 6146
.org 0x1ebc
	adds r1, #12	@ 00001ebc 0c31
.org 0x1ebe
	ldr r0, [r1, #0]	@ 00001ebe 0868
.org 0x1ec0
	cmp r0, r6	@ 00001ec0 b042
.org 0x1ec2
	bne.n 0x1eca	@ 00001ec2 02d1
.org 0x1ec4
	ldr r0, [r3, #0]	@ 00001ec4 1868
.org 0x1ec6
	cmp r0, r5	@ 00001ec6 a842
.org 0x1ec8
	beq.n 0x1f14	@ 00001ec8 24d0
.org 0x1eca
	adds r3, #12	@ 00001eca 0c33
.org 0x1ecc
	adds r1, #12	@ 00001ecc 0c31
.org 0x1ece
	adds r2, #1	@ 00001ece 0132
.org 0x1ed0
	cmp r2, r4	@ 00001ed0 a242
.org 0x1ed2
	bcc.n 0x1ebe	@ 00001ed2 f4d3
.org 0x1ed4
	mov r1, ip	@ 00001ed4 6146
.org 0x1ed6
	ldr r0, [r1, #0]	@ 00001ed6 0868
.org 0x1ed8
	cmp r0, #15	@ 00001ed8 0f28
.org 0x1eda
	bls.n 0x1ee8	@ 00001eda 05d9
.org 0x1edc
	movs r0, #1	@ 00001edc 0120
.org 0x1ede
	negs r0, r0	@ 00001ede 4042
.org 0x1ee0
	b.n 0x1f16	@ 00001ee0 19e0
.org 0x1ee2
	.byte 0x00	@ 00001ee2 data
.org 0x1ee3
	.byte 0x00	@ 00001ee3 data
.org 0x1ee4
	.byte 0xc0,0x07,0x00,0x02	@ 00001ee4 data
.org 0x1ee8
	lsls r1, r2, #1	@ 00001ee8 5100
.org 0x1eea
	adds r1, r1, r2	@ 00001eea 8918
.org 0x1eec
	lsls r1, r1, #2	@ 00001eec 8900
.org 0x1eee
	mov r0, ip	@ 00001eee 6046
.org 0x1ef0
	adds r0, #8	@ 00001ef0 0830
.org 0x1ef2
	adds r0, r1, r0	@ 00001ef2 0818
.org 0x1ef4
	str r5, [r0, #0]	@ 00001ef4 0560
.org 0x1ef6
	mov r0, ip	@ 00001ef6 6046
.org 0x1ef8
	adds r3, r1, r0	@ 00001ef8 0b18
.org 0x1efa
	ldrb r2, [r3, #4]	@ 00001efa 1a79
.org 0x1efc
	movs r0, #4	@ 00001efc 0420
.org 0x1efe
	negs r0, r0	@ 00001efe 4042
.org 0x1f00
	ands r0, r2	@ 00001f00 1040
.org 0x1f02
	strb r0, [r3, #4]	@ 00001f02 1871
.org 0x1f04
	mov r0, ip	@ 00001f04 6046
.org 0x1f06
	adds r0, #12	@ 00001f06 0c30
.org 0x1f08
	adds r1, r1, r0	@ 00001f08 0918
.org 0x1f0a
	str r6, [r1, #0]	@ 00001f0a 0e60
.org 0x1f0c
	mov r1, ip	@ 00001f0c 6146
.org 0x1f0e
	ldr r0, [r1, #0]	@ 00001f0e 0868
.org 0x1f10
	adds r0, #1	@ 00001f10 0130
.org 0x1f12
	str r0, [r1, #0]	@ 00001f12 0860
.org 0x1f14
	movs r0, #0	@ 00001f14 0020
