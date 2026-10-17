@ FUN_08101ea0  entry 0x08101ea0  size 196
.thumb
.org 0x101ea0
FUN_08101ea0:
	push {r4, r5, r6, r7, lr}	@ 00101ea0 f0b5
.org 0x101ea2
	adds r5, r0, #0	@ 00101ea2 051c
.org 0x101ea4
	adds r1, r5, #0	@ 00101ea4 291c
.org 0x101ea6
	adds r1, #180	@ 00101ea6 b431
.org 0x101ea8
	ldr r0, [r5, #40]	@ 00101ea8 a86a
.org 0x101eaa
	ldr r2, [r0, #0]	@ 00101eaa 0268
.org 0x101eac
	str r2, [r1, #0]	@ 00101eac 0a60
.org 0x101eae
	ldr r0, [pc, #52]	@ 00101eae 0d48
.org 0x101eb0
	adds r0, #206	@ 00101eb0 ce30
.org 0x101eb2
	ldrb r6, [r0, #0]	@ 00101eb2 0678
.org 0x101eb4
	adds r7, r6, #0	@ 00101eb4 371c
.org 0x101eb6
	cmp r2, #0	@ 00101eb6 002a
.org 0x101eb8
	bne.n 0x101ee8	@ 00101eb8 16d1
.org 0x101eba
	adds r0, r5, #0	@ 00101eba 281c
.org 0x101ebc
	adds r0, #188	@ 00101ebc bc30
.org 0x101ebe
	ldr r1, [r0, #0]	@ 00101ebe 0168
.org 0x101ec0
	adds r4, r0, #0	@ 00101ec0 041c
.org 0x101ec2
	cmp r1, #169	@ 00101ec2 a929
.org 0x101ec4
	beq.n 0x101f46	@ 00101ec4 3fd0
.org 0x101ec6
	lsls r0, r1, #16	@ 00101ec6 0804
.org 0x101ec8
	lsrs r0, r0, #16	@ 00101ec8 000c
.org 0x101eca
	bl 0x2624	@ 00101eca 00f7abfb
.org 0x101ece
	lsls r1, r6, #5	@ 00101ece 7101
.org 0x101ed0
	movs r2, #128	@ 00101ed0 8022
.org 0x101ed2
	lsls r2, r2, #2	@ 00101ed2 9200
.org 0x101ed4
	adds r0, r2, #0	@ 00101ed4 101c
.org 0x101ed6
	orrs r1, r0	@ 00101ed6 0143
.org 0x101ed8
	movs r0, #169	@ 00101ed8 a920
.org 0x101eda
	bl 0x249c	@ 00101eda 00f7dffa
.org 0x101ede
	movs r0, #169	@ 00101ede a920
.org 0x101ee0
	b.n 0x101f44	@ 00101ee0 30e0
.org 0x101ee2
	.byte 0x00	@ 00101ee2 data
.org 0x101ee3
	.byte 0x00	@ 00101ee3 data
.org 0x101ee4
	.byte 0x40,0xde,0x02,0x02	@ 00101ee4 data
.org 0x101ee8
	movs r0, #150	@ 00101ee8 9620
.org 0x101eea
	lsls r0, r0, #2	@ 00101eea 8000
.org 0x101eec
	cmp r2, r0	@ 00101eec 8242
.org 0x101eee
	bhi.n 0x101f18	@ 00101eee 13d8
.org 0x101ef0
	adds r0, r5, #0	@ 00101ef0 281c
.org 0x101ef2
	adds r0, #188	@ 00101ef2 bc30
.org 0x101ef4
	ldr r1, [r0, #0]	@ 00101ef4 0168
.org 0x101ef6
	adds r4, r0, #0	@ 00101ef6 041c
.org 0x101ef8
	cmp r1, #168	@ 00101ef8 a829
.org 0x101efa
	beq.n 0x101f46	@ 00101efa 24d0
.org 0x101efc
	lsls r0, r1, #16	@ 00101efc 0804
.org 0x101efe
	lsrs r0, r0, #16	@ 00101efe 000c
.org 0x101f00
	bl 0x2624	@ 00101f00 00f790fb
.org 0x101f04
	lsls r1, r6, #5	@ 00101f04 7101
.org 0x101f06
	movs r2, #128	@ 00101f06 8022
.org 0x101f08
	lsls r2, r2, #2	@ 00101f08 9200
.org 0x101f0a
	adds r0, r2, #0	@ 00101f0a 101c
.org 0x101f0c
	orrs r1, r0	@ 00101f0c 0143
.org 0x101f0e
	movs r0, #168	@ 00101f0e a820
.org 0x101f10
	bl 0x249c	@ 00101f10 00f7c4fa
.org 0x101f14
	movs r0, #168	@ 00101f14 a820
.org 0x101f16
	b.n 0x101f44	@ 00101f16 15e0
.org 0x101f18
	movs r0, #225	@ 00101f18 e120
.org 0x101f1a
	lsls r0, r0, #3	@ 00101f1a c000
.org 0x101f1c
	adds r4, r5, #0	@ 00101f1c 2c1c
.org 0x101f1e
	adds r4, #188	@ 00101f1e bc34
.org 0x101f20
	cmp r2, r0	@ 00101f20 8242
.org 0x101f22
	bhi.n 0x101f46	@ 00101f22 10d8
.org 0x101f24
	ldr r0, [r4, #0]	@ 00101f24 2068
.org 0x101f26
	cmp r0, #167	@ 00101f26 a728
.org 0x101f28
	beq.n 0x101f46	@ 00101f28 0dd0
.org 0x101f2a
	lsls r0, r0, #16	@ 00101f2a 0004
.org 0x101f2c
	lsrs r0, r0, #16	@ 00101f2c 000c
.org 0x101f2e
	bl 0x2624	@ 00101f2e 00f779fb
.org 0x101f32
	lsls r1, r7, #5	@ 00101f32 7901
.org 0x101f34
	movs r2, #128	@ 00101f34 8022
.org 0x101f36
	lsls r2, r2, #2	@ 00101f36 9200
.org 0x101f38
	adds r0, r2, #0	@ 00101f38 101c
.org 0x101f3a
	orrs r1, r0	@ 00101f3a 0143
.org 0x101f3c
	movs r0, #167	@ 00101f3c a720
.org 0x101f3e
	bl 0x249c	@ 00101f3e 00f7adfa
.org 0x101f42
	movs r0, #167	@ 00101f42 a720
.org 0x101f44
	str r0, [r4, #0]	@ 00101f44 2060
.org 0x101f46
	ldrh r0, [r4, #0]	@ 00101f46 2088
.org 0x101f48
	bl 0x25d8	@ 00101f48 00f746fb
.org 0x101f4c
	ldrb r0, [r5, #13]	@ 00101f4c 687b
.org 0x101f4e
	cmp r0, #0	@ 00101f4e 0028
.org 0x101f50
	beq.n 0x101f64	@ 00101f50 08d0
.org 0x101f52
	ldr r1, [pc, #24]	@ 00101f52 0649
.org 0x101f54
	ldrb r0, [r5, #9]	@ 00101f54 687a
.org 0x101f56
	lsls r0, r0, #2	@ 00101f56 8000
.org 0x101f58
	adds r0, r0, r1	@ 00101f58 4018
.org 0x101f5a
	movs r1, #2	@ 00101f5a 0221
.org 0x101f5c
	str r1, [r5, #12]	@ 00101f5c e960
.org 0x101f5e
	ldr r0, [r0, #0]	@ 00101f5e 0068
.org 0x101f60
	ldr r0, [r0, #8]	@ 00101f60 8068
.org 0x101f62
	str r0, [r5, #20]	@ 00101f62 6861
