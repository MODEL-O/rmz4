@ FUN_08087938  entry 0x08087938  size 80
.thumb
.org 0x87938
FUN_08087938:
	push {r4, r5, lr}	@ 00087938 30b5
.org 0x8793a
	adds r2, r0, #0	@ 0008793a 021c
.org 0x8793c
	adds r1, r2, #0	@ 0008793c 111c
.org 0x8793e
	adds r1, #180	@ 0008793e b431
.org 0x87940
	movs r0, #3	@ 00087940 0320
.org 0x87942
	strb r0, [r1, #0]	@ 00087942 0870
.org 0x87944
	ldrb r0, [r2, #10]	@ 00087944 907a
.org 0x87946
	lsrs r3, r0, #4	@ 00087946 0309
.org 0x87948
	movs r5, #1	@ 00087948 0125
.org 0x8794a
	ands r3, r5	@ 0008794a 2b40
.org 0x8794c
	movs r4, #0	@ 0008794c 0024
.org 0x8794e
	ldr r0, [pc, #28]	@ 0008794e 0748
.org 0x87950
	ldr r0, [r0, #0]	@ 00087950 0068
.org 0x87952
	ldr r1, [r2, #84]	@ 00087952 516d
.org 0x87954
	ldr r0, [r0, #84]	@ 00087954 406d
.org 0x87956
	cmp r1, r0	@ 00087956 8142
.org 0x87958
	bge.n 0x8795c	@ 00087958 00da
.org 0x8795a
	movs r4, #1	@ 0008795a 0124
.org 0x8795c
	adds r1, r3, #0	@ 0008795c 191c
.org 0x8795e
	eors r1, r4	@ 0008795e 6140
.org 0x87960
	cmp r1, #0	@ 00087960 0029
.org 0x87962
	beq.n 0x87970	@ 00087962 05d0
.org 0x87964
	strb r5, [r2, #14]	@ 00087964 9573
.org 0x87966
	movs r0, #0	@ 00087966 0020
.org 0x87968
	strb r0, [r2, #15]	@ 00087968 d073
.org 0x8796a
	b.n 0x87976	@ 0008796a 04e0
.org 0x8796c
	.byte 0xf0,0xdb,0x02,0x02	@ 0008796c data
.org 0x87970
	movs r0, #2	@ 00087970 0220
.org 0x87972
	strb r0, [r2, #14]	@ 00087972 9073
.org 0x87974
	strb r1, [r2, #15]	@ 00087974 d173
.org 0x87976
	ldr r0, [pc, #20]	@ 00087976 0548
.org 0x87978
	ldrb r1, [r2, #14]	@ 00087978 917b
.org 0x8797a
	lsls r1, r1, #2	@ 0008797a 8900
.org 0x8797c
	adds r1, r1, r0	@ 0008797c 0918
.org 0x8797e
	ldr r1, [r1, #0]	@ 0008797e 0968
.org 0x87980
	adds r0, r2, #0	@ 00087980 101c
.org 0x87982
	bl 0x128f80	@ 00087982 a1f0fdfa
.org 0x87986
	pop {r4, r5}	@ 00087986 30bc
