@ FUN_080c3024  entry 0x080c3024  size 98
.thumb
.org 0xc3024
FUN_080c3024:
	push {r4, r5, r6, r7, lr}	@ 000c3024 f0b5
.org 0xc3026
	mov r7, r8	@ 000c3026 4746
.org 0xc3028
	push {r7}	@ 000c3028 80b4
.org 0xc302a
	adds r7, r0, #0	@ 000c302a 071c
.org 0xc302c
	mov r8, r1	@ 000c302c 8846
.org 0xc302e
	lsls r2, r2, #24	@ 000c302e 1206
.org 0xc3030
	lsrs r5, r2, #24	@ 000c3030 150e
.org 0xc3032
	lsls r3, r3, #24	@ 000c3032 1b06
.org 0xc3034
	lsrs r6, r3, #24	@ 000c3034 1e0e
.org 0xc3036
	ldr r0, [pc, #80]	@ 000c3036 1448
.org 0xc3038
	ldr r0, [r0, #0]	@ 000c3038 0068
.org 0xc303a
	bl 0x5500	@ 000c303a 42f761fa
.org 0xc303e
	adds r4, r0, #0	@ 000c303e 041c
.org 0xc3040
	cmp r4, #0	@ 000c3040 002c
.org 0xc3042
	beq.n 0xc307a	@ 000c3042 1ad0
.org 0xc3044
	adds r1, r4, #0	@ 000c3044 211c
.org 0xc3046
	adds r1, #37	@ 000c3046 2531
.org 0xc3048
	movs r3, #0	@ 000c3048 0023
.org 0xc304a
	movs r0, #8	@ 000c304a 0820
.org 0xc304c
	strb r0, [r1, #0]	@ 000c304c 0870
.org 0xc304e
	ldr r1, [pc, #60]	@ 000c304e 0f49
.org 0xc3050
	movs r0, #17	@ 000c3050 1120
.org 0xc3052
	strb r0, [r4, #9]	@ 000c3052 6072
.org 0xc3054
	ldr r0, [r1, #68]	@ 000c3054 486c
.org 0xc3056
	ldr r0, [r0, #0]	@ 000c3056 0068
.org 0xc3058
	str r0, [r4, #20]	@ 000c3058 6061
.org 0xc305a
	movs r2, #0	@ 000c305a 0022
.org 0xc305c
	strh r3, [r4, #32]	@ 000c305c 2384
.org 0xc305e
	adds r0, r4, #0	@ 000c305e 201c
.org 0xc3060
	adds r0, #34	@ 000c3060 2230
.org 0xc3062
	strb r2, [r0, #0]	@ 000c3062 0270
.org 0xc3064
	str r7, [r4, #40]	@ 000c3064 a762
.org 0xc3066
	mov r3, r8	@ 000c3066 4346
.org 0xc3068
	ldr r0, [r3, #0]	@ 000c3068 1868
.org 0xc306a
	ldr r1, [r3, #4]	@ 000c306a 5968
.org 0xc306c
	str r0, [r4, #84]	@ 000c306c 6065
.org 0xc306e
	str r1, [r4, #88]	@ 000c306e a165
.org 0xc3070
	strb r2, [r4, #16]	@ 000c3070 2274
.org 0xc3072
	strb r5, [r4, #17]	@ 000c3072 6574
.org 0xc3074
	adds r0, r4, #0	@ 000c3074 201c
.org 0xc3076
	adds r0, #180	@ 000c3076 b430
.org 0xc3078
	strb r6, [r0, #0]	@ 000c3078 0670
.org 0xc307a
	adds r0, r4, #0	@ 000c307a 201c
.org 0xc307c
	pop {r3}	@ 000c307c 08bc
.org 0xc307e
	mov r8, r3	@ 000c307e 9846
.org 0xc3080
	pop {r4, r5, r6, r7}	@ 000c3080 f0bc
.org 0xc3082
	pop {r1}	@ 000c3082 02bc
.org 0xc3084
	bx r1	@ 000c3084 0847
