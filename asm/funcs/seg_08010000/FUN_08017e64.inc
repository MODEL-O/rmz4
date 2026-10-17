@ FUN_08017e64  entry 0x08017e64  size 110
.thumb
.org 0x17e64
FUN_08017e64:
	push {r4, r5, lr}	@ 00017e64 30b5
.org 0x17e66
	adds r5, r0, #0	@ 00017e66 051c
.org 0x17e68
	ldrb r0, [r5, #14]	@ 00017e68 a87b
.org 0x17e6a
	cmp r0, #0	@ 00017e6a 0028
.org 0x17e6c
	bne.n 0x17e90	@ 00017e6c 10d1
.org 0x17e6e
	ldr r1, [r5, #92]	@ 00017e6e e96d
.org 0x17e70
	lsrs r1, r1, #4	@ 00017e70 0909
.org 0x17e72
	lsls r1, r1, #1	@ 00017e72 4900
.org 0x17e74
	ldr r0, [pc, #16]	@ 00017e74 0448
.org 0x17e76
	adds r1, r1, r0	@ 00017e76 0918
.org 0x17e78
	ldrh r2, [r1, #0]	@ 00017e78 0a88
.org 0x17e7a
	ldr r0, [pc, #16]	@ 00017e7a 0448
.org 0x17e7c
	ands r0, r2	@ 00017e7c 1040
.org 0x17e7e
	movs r2, #3	@ 00017e7e 0322
.org 0x17e80
	orrs r0, r2	@ 00017e80 1043
.org 0x17e82
	strh r0, [r1, #0]	@ 00017e82 0880
.org 0x17e84
	b.n 0x17ed0	@ 00017e84 24e0
.org 0x17e86
	.byte 0x00	@ 00017e86 data
.org 0x17e87
	.byte 0x00	@ 00017e87 data
.org 0x17e88
	.byte 0x04,0x0a,0x00,0x02	@ 00017e88 data
.org 0x17e8c
	.byte 0xfc,0xff,0x00,0x00	@ 00017e8c data
.org 0x17e90
	cmp r0, #1	@ 00017e90 0128
.org 0x17e92
	bne.n 0x17ed6	@ 00017e92 20d1
.org 0x17e94
	ldr r0, [r5, #92]	@ 00017e94 e86d
.org 0x17e96
	lsls r0, r0, #16	@ 00017e96 0004
.org 0x17e98
	lsrs r0, r0, #20	@ 00017e98 000d
.org 0x17e9a
	lsls r3, r0, #1	@ 00017e9a 4300
.org 0x17e9c
	ldr r4, [pc, #60]	@ 00017e9c 0f4c
.org 0x17e9e
	adds r3, r3, r4	@ 00017e9e 1b19
.org 0x17ea0
	ldr r1, [r5, #100]	@ 00017ea0 696e
.org 0x17ea2
	movs r2, #71	@ 00017ea2 4722
.org 0x17ea4
	orrs r1, r2	@ 00017ea4 1143
.org 0x17ea6
	strh r1, [r3, #0]	@ 00017ea6 1980
.org 0x17ea8
	lsls r0, r0, #2	@ 00017ea8 8000
.org 0x17eaa
	adds r4, #8	@ 00017eaa 0834
.org 0x17eac
	adds r0, r0, r4	@ 00017eac 0019
.org 0x17eae
	movs r2, #0	@ 00017eae 0022
.org 0x17eb0
	str r2, [r0, #0]	@ 00017eb0 0260
.org 0x17eb2
	ldr r0, [pc, #44]	@ 00017eb2 0b48
.org 0x17eb4
	ldr r0, [r0, #0]	@ 00017eb4 0068
.org 0x17eb6
	ldr r2, [pc, #44]	@ 00017eb6 0b4a
.org 0x17eb8
	adds r0, r0, r2	@ 00017eb8 8018
.org 0x17eba
	movs r2, #248	@ 00017eba f822
.org 0x17ebc
	lsls r2, r2, #5	@ 00017ebc 5201
.org 0x17ebe
	ands r1, r2	@ 00017ebe 1140
.org 0x17ec0
	lsls r1, r1, #3	@ 00017ec0 c900
.org 0x17ec2
	movs r2, #192	@ 00017ec2 c022
.org 0x17ec4
	lsls r2, r2, #19	@ 00017ec4 d204
.org 0x17ec6
	adds r1, r1, r2	@ 00017ec6 8918
.org 0x17ec8
	movs r2, #128	@ 00017ec8 8022
.org 0x17eca
	lsls r2, r2, #2	@ 00017eca 9200
.org 0x17ecc
	bl 0x128be0	@ 00017ecc 10f188fe
.org 0x17ed0
	ldrb r0, [r5, #14]	@ 00017ed0 a87b
