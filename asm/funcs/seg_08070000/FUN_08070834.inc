@ FUN_08070834  entry 0x08070834  size 90
.thumb
.org 0x70834
FUN_08070834:
	push {r4, r5, lr}	@ 00070834 30b5
.org 0x70836
	adds r4, r0, #0	@ 00070836 041c
.org 0x70838
	ldrb r0, [r4, #10]	@ 00070838 a07a
.org 0x7083a
	lsrs r5, r0, #4	@ 0007083a 0509
.org 0x7083c
	movs r1, #1	@ 0007083c 0121
.org 0x7083e
	ands r5, r1	@ 0007083e 0d40
.org 0x70840
	adds r0, r4, #0	@ 00070840 201c
.org 0x70842
	adds r0, #180	@ 00070842 b430
.org 0x70844
	ldr r0, [r0, #0]	@ 00070844 0068
.org 0x70846
	adds r0, #180	@ 00070846 b430
.org 0x70848
	strb r1, [r0, #0]	@ 00070848 0170
.org 0x7084a
	adds r0, r4, #0	@ 0007084a 201c
.org 0x7084c
	bl 0x73e00	@ 0007084c 03f0d8fa
.org 0x70850
	adds r1, r4, #0	@ 00070850 211c
.org 0x70852
	adds r1, #195	@ 00070852 c331
.org 0x70854
	strb r0, [r1, #0]	@ 00070854 0870
.org 0x70856
	movs r2, #0	@ 00070856 0022
.org 0x70858
	ldr r0, [pc, #20]	@ 00070858 0548
.org 0x7085a
	ldr r0, [r0, #0]	@ 0007085a 0068
.org 0x7085c
	ldr r1, [r4, #84]	@ 0007085c 616d
.org 0x7085e
	ldr r0, [r0, #84]	@ 0007085e 406d
.org 0x70860
	cmp r1, r0	@ 00070860 8142
.org 0x70862
	bge.n 0x70866	@ 00070862 00da
.org 0x70864
	movs r2, #1	@ 00070864 0122
.org 0x70866
	cmp r2, r5	@ 00070866 aa42
.org 0x70868
	beq.n 0x70874	@ 00070868 04d0
.org 0x7086a
	ldrb r0, [r4, #14]	@ 0007086a a07b
.org 0x7086c
	adds r0, #1	@ 0007086c 0130
.org 0x7086e
	b.n 0x70876	@ 0007086e 02e0
.org 0x70870
	.byte 0xf0,0xdb,0x02,0x02	@ 00070870 data
.org 0x70874
	movs r0, #3	@ 00070874 0320
.org 0x70876
	strb r0, [r4, #14]	@ 00070876 a073
.org 0x70878
	movs r0, #0	@ 00070878 0020
.org 0x7087a
	strb r0, [r4, #15]	@ 0007087a e073
.org 0x7087c
	ldr r1, [pc, #20]	@ 0007087c 0549
.org 0x7087e
	ldrb r0, [r4, #13]	@ 0007087e 607b
.org 0x70880
	lsls r0, r0, #2	@ 00070880 8000
.org 0x70882
	adds r0, r0, r1	@ 00070882 4018
.org 0x70884
	ldr r1, [r0, #0]	@ 00070884 0168
.org 0x70886
	adds r0, r4, #0	@ 00070886 201c
.org 0x70888
	bl 0x128f80	@ 00070888 b8f07afb
.org 0x7088c
	pop {r4, r5}	@ 0007088c 30bc
