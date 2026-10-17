@ FUN_08056e64  entry 0x08056e64  size 152
.thumb
.org 0x56e64
FUN_08056e64:
	push {r4, lr}	@ 00056e64 10b5
.org 0x56e66
	adds r4, r0, #0	@ 00056e66 041c
.org 0x56e68
	ldrb r0, [r4, #15]	@ 00056e68 e07b
.org 0x56e6a
	cmp r0, #0	@ 00056e6a 0028
.org 0x56e6c
	bne.n 0x56e8c	@ 00056e6c 0ed1
.org 0x56e6e
	ldr r1, [pc, #116]	@ 00056e6e 1d49
.org 0x56e70
	adds r0, r4, #0	@ 00056e70 201c
.org 0x56e72
	bl 0x1cf00	@ 00056e72 c6f745f8
.org 0x56e76
	adds r0, r4, #0	@ 00056e76 201c
.org 0x56e78
	bl 0x5977c	@ 00056e78 02f080fc
.org 0x56e7c
	adds r1, r0, #0	@ 00056e7c 011c
.org 0x56e7e
	ldr r0, [pc, #104]	@ 00056e7e 1a48
.org 0x56e80
	adds r0, r1, r0	@ 00056e80 0818
.org 0x56e82
	ldrb r1, [r0, #0]	@ 00056e82 0178
.org 0x56e84
	strb r1, [r4, #18]	@ 00056e84 a174
.org 0x56e86
	ldrb r0, [r4, #15]	@ 00056e86 e07b
.org 0x56e88
	adds r0, #1	@ 00056e88 0130
.org 0x56e8a
	strb r0, [r4, #15]	@ 00056e8a e073
.org 0x56e8c
	adds r0, r4, #0	@ 00056e8c 201c
.org 0x56e8e
	bl 0x1cff0	@ 00056e8e c6f7aff8
.org 0x56e92
	adds r0, r4, #0	@ 00056e92 201c
.org 0x56e94
	adds r0, #116	@ 00056e94 7430
.org 0x56e96
	ldr r3, [pc, #84]	@ 00056e96 154b
.org 0x56e98
	ldrb r1, [r4, #30]	@ 00056e98 a17f
.org 0x56e9a
	lsls r1, r1, #8	@ 00056e9a 0902
.org 0x56e9c
	adds r2, r4, #0	@ 00056e9c 221c
.org 0x56e9e
	adds r2, #112	@ 00056e9e 7032
.org 0x56ea0
	ldrb r2, [r2, #0]	@ 00056ea0 1278
.org 0x56ea2
	orrs r1, r2	@ 00056ea2 1143
.org 0x56ea4
	ldr r2, [pc, #72]	@ 00056ea4 124a
.org 0x56ea6
	adds r1, r1, r2	@ 00056ea6 8918
.org 0x56ea8
	lsls r1, r1, #2	@ 00056ea8 8900
.org 0x56eaa
	adds r1, r1, r3	@ 00056eaa c918
.org 0x56eac
	adds r2, r4, #0	@ 00056eac 221c
.org 0x56eae
	adds r2, #113	@ 00056eae 7132
.org 0x56eb0
	ldrb r2, [r2, #0]	@ 00056eb0 1278
.org 0x56eb2
	lsls r2, r2, #24	@ 00056eb2 1206
.org 0x56eb4
	asrs r2, r2, #24	@ 00056eb4 1216
.org 0x56eb6
	ldr r1, [r1, #0]	@ 00056eb6 0968
.org 0x56eb8
	lsls r2, r2, #2	@ 00056eb8 9200
.org 0x56eba
	adds r2, r2, r1	@ 00056eba 5218
.org 0x56ebc
	ldr r1, [r2, #0]	@ 00056ebc 1168
.org 0x56ebe
	ldrb r2, [r1, #0]	@ 00056ebe 0a78
.org 0x56ec0
	lsls r1, r2, #1	@ 00056ec0 5100
.org 0x56ec2
	adds r1, r1, r2	@ 00056ec2 8918
.org 0x56ec4
	lsls r1, r1, #3	@ 00056ec4 c900
.org 0x56ec6
	ldr r2, [pc, #44]	@ 00056ec6 0b4a
.org 0x56ec8
	adds r1, r1, r2	@ 00056ec8 8918
.org 0x56eca
	bl 0x5784	@ 00056eca aef75bfc
.org 0x56ece
	adds r0, r4, #0	@ 00056ece 201c
.org 0x56ed0
	bl 0x597ac	@ 00056ed0 02f06cfc
.org 0x56ed4
	cmp r0, #0	@ 00056ed4 0028
.org 0x56ed6
	beq.n 0x56ef8	@ 00056ed6 0fd0
.org 0x56ed8
	movs r1, #0	@ 00056ed8 0021
.org 0x56eda
	movs r0, #4	@ 00056eda 0420
.org 0x56edc
	strb r0, [r4, #13]	@ 00056edc 6073
.org 0x56ede
	strb r1, [r4, #14]	@ 00056ede a173
.org 0x56ee0
	strb r1, [r4, #15]	@ 00056ee0 e173
.org 0x56ee2
	b.n 0x56f0a	@ 00056ee2 12e0
.org 0x56ee4
	.byte 0x06,0xa0,0x00,0x00	@ 00056ee4 data
.org 0x56ee8
	.byte 0xc4,0x87,0x85,0x08	@ 00056ee8 data
.org 0x56eec
	.byte 0x1c,0x87,0x85,0x08	@ 00056eec data
.org 0x56ef0
	.byte 0x00,0x60,0xff,0xff	@ 00056ef0 data
.org 0x56ef4
	.byte 0xcc,0x84,0x85,0x08	@ 00056ef4 data
.org 0x56ef8
	ldrb r0, [r4, #18]	@ 00056ef8 a07c
.org 0x56efa
	subs r0, #1	@ 00056efa 0138
