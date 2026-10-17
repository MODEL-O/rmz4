@ FUN_08046fb8  entry 0x08046fb8  size 190
.thumb
.org 0x46fb8
FUN_08046fb8:
	push {r4, r5, r6, r7, lr}	@ 00046fb8 f0b5
.org 0x46fba
	mov r7, sl	@ 00046fba 5746
.org 0x46fbc
	mov r6, r9	@ 00046fbc 4e46
.org 0x46fbe
	mov r5, r8	@ 00046fbe 4546
.org 0x46fc0
	push {r5, r6, r7}	@ 00046fc0 e0b4
.org 0x46fc2
	sub sp, #8	@ 00046fc2 82b0
.org 0x46fc4
	str r0, [sp, #0]	@ 00046fc4 0090
.org 0x46fc6
	lsls r1, r1, #24	@ 00046fc6 0906
.org 0x46fc8
	lsrs r1, r1, #24	@ 00046fc8 090e
.org 0x46fca
	str r1, [sp, #4]	@ 00046fca 0191
.org 0x46fcc
	ldr r0, [pc, #104]	@ 00046fcc 1a48
.org 0x46fce
	ldr r0, [r0, #0]	@ 00046fce 0068
.org 0x46fd0
	bl 0x5500	@ 00046fd0 bef796fa
.org 0x46fd4
	adds r2, r0, #0	@ 00046fd4 021c
.org 0x46fd6
	cmp r2, #0	@ 00046fd6 002a
.org 0x46fd8
	beq.n 0x47074	@ 00046fd8 4cd0
.org 0x46fda
	ldr r7, [pc, #96]	@ 00046fda 184f
.org 0x46fdc
	movs r6, #27	@ 00046fdc 1b26
.org 0x46fde
	strb r6, [r2, #9]	@ 00046fde 5672
.org 0x46fe0
	ldr r0, [r7, #108]	@ 00046fe0 f86e
.org 0x46fe2
	ldr r0, [r0, #0]	@ 00046fe2 0068
.org 0x46fe4
	str r0, [r2, #20]	@ 00046fe4 5061
.org 0x46fe6
	ldrb r1, [r2, #11]	@ 00046fe6 d17a
.org 0x46fe8
	movs r0, #191	@ 00046fe8 bf20
.org 0x46fea
	mov r9, r0	@ 00046fea 8146
.org 0x46fec
	ands r0, r1	@ 00046fec 0840
.org 0x46fee
	strb r0, [r2, #11]	@ 00046fee d072
.org 0x46ff0
	adds r3, r2, #0	@ 00046ff0 131c
.org 0x46ff2
	adds r3, #37	@ 00046ff2 2533
.org 0x46ff4
	movs r1, #16	@ 00046ff4 1021
.org 0x46ff6
	mov r8, r1	@ 00046ff6 8846
.org 0x46ff8
	mov r0, r8	@ 00046ff8 4046
.org 0x46ffa
	strb r0, [r3, #0]	@ 00046ffa 1870
.org 0x46ffc
	ldr r5, [pc, #64]	@ 00046ffc 104d
.org 0x46ffe
	ldrh r0, [r5, #0]	@ 00046ffe 2888
.org 0x47000
	strh r0, [r2, #32]	@ 00047000 1084
.org 0x47002
	ldr r4, [pc, #64]	@ 00047002 104c
.org 0x47004
	ldrb r0, [r4, #0]	@ 00047004 2078
.org 0x47006
	movs r1, #34	@ 00047006 2221
.org 0x47008
	adds r1, r1, r2	@ 00047008 8918
.org 0x4700a
	mov ip, r1	@ 0004700a 8c46
.org 0x4700c
	strb r0, [r1, #0]	@ 0004700c 0870
.org 0x4700e
	ldr r0, [sp, #0]	@ 0004700e 0098
.org 0x47010
	adds r0, #248	@ 00047010 f830
.org 0x47012
	ldrb r0, [r0, #0]	@ 00047012 0078
.org 0x47014
	adds r1, r7, #0	@ 00047014 391c
.org 0x47016
	cmp r0, #2	@ 00047016 0228
.org 0x47018
	bne.n 0x47048	@ 00047018 16d1
.org 0x4701a
	strb r6, [r2, #9]	@ 0004701a 5672
.org 0x4701c
	ldr r0, [r1, #108]	@ 0004701c c86e
.org 0x4701e
	ldr r0, [r0, #0]	@ 0004701e 0068
.org 0x47020
	str r0, [r2, #20]	@ 00047020 5061
.org 0x47022
	ldrb r1, [r2, #11]	@ 00047022 d17a
.org 0x47024
	mov r0, r9	@ 00047024 4846
.org 0x47026
	ands r0, r1	@ 00047026 0840
.org 0x47028
	strb r0, [r2, #11]	@ 00047028 d072
.org 0x4702a
	mov r0, r8	@ 0004702a 4046
.org 0x4702c
	strb r0, [r3, #0]	@ 0004702c 1870
.org 0x4702e
	ldrh r0, [r5, #0]	@ 0004702e 2888
.org 0x47030
	strh r0, [r2, #32]	@ 00047030 1084
.org 0x47032
	adds r1, r4, #0	@ 00047032 211c
.org 0x47034
	ldrb r0, [r1, #0]	@ 00047034 0878
.org 0x47036
	b.n 0x47062	@ 00047036 14e0
.org 0x47038
	.byte 0x88,0xed,0x02,0x02	@ 00047038 data
.org 0x4703c
	.byte 0xf8,0x39,0x85,0x08	@ 0004703c data
.org 0x47040
	.byte 0xfc,0x36,0x85,0x08	@ 00047040 data
.org 0x47044
	.byte 0x04,0x37,0x85,0x08	@ 00047044 data
.org 0x47048
	strb r6, [r2, #9]	@ 00047048 5672
.org 0x4704a
	ldr r0, [r7, #108]	@ 0004704a f86e
.org 0x4704c
	ldr r0, [r0, #0]	@ 0004704c 0068
.org 0x4704e
	str r0, [r2, #20]	@ 0004704e 5061
.org 0x47050
	ldrb r1, [r2, #11]	@ 00047050 d17a
.org 0x47052
	mov r0, r9	@ 00047052 4846
.org 0x47054
	ands r0, r1	@ 00047054 0840
.org 0x47056
	strb r0, [r2, #11]	@ 00047056 d072
.org 0x47058
	mov r0, r8	@ 00047058 4046
.org 0x4705a
	strb r0, [r3, #0]	@ 0004705a 1870
.org 0x4705c
	ldrh r0, [r5, #2]	@ 0004705c 6888
.org 0x4705e
	strh r0, [r2, #32]	@ 0004705e 1084
.org 0x47060
	ldrb r0, [r4, #1]	@ 00047060 6078
.org 0x47062
	mov r1, ip	@ 00047062 6146
.org 0x47064
	strb r0, [r1, #0]	@ 00047064 0870
.org 0x47066
	ldr r0, [sp, #0]	@ 00047066 0098
.org 0x47068
	str r0, [r2, #40]	@ 00047068 9062
.org 0x4706a
	movs r0, #0	@ 0004706a 0020
.org 0x4706c
	strb r0, [r2, #16]	@ 0004706c 1074
.org 0x4706e
	mov r1, sp	@ 0004706e 6946
.org 0x47070
	ldrb r1, [r1, #4]	@ 00047070 0979
.org 0x47072
	strb r1, [r2, #17]	@ 00047072 5174
.org 0x47074
	adds r0, r2, #0	@ 00047074 101c
