@ FUN_080a07e4  entry 0x080a07e4  size 152
.thumb
.org 0xa07e4
FUN_080a07e4:
	push {r4, lr}	@ 000a07e4 10b5
.org 0xa07e6
	sub sp, #4	@ 000a07e6 81b0
.org 0xa07e8
	adds r4, r0, #0	@ 000a07e8 041c
.org 0xa07ea
	ldr r1, [pc, #144]	@ 000a07ea 2449
.org 0xa07ec
	mov r0, sp	@ 000a07ec 6846
.org 0xa07ee
	movs r2, #4	@ 000a07ee 0422
.org 0xa07f0
	bl 0x129258	@ 000a07f0 88f032fd
.org 0xa07f4
	ldrb r0, [r4, #15]	@ 000a07f4 e07b
.org 0xa07f6
	cmp r0, #0	@ 000a07f6 0028
.org 0xa07f8
	bne.n 0xa081c	@ 000a07f8 10d1
.org 0xa07fa
	movs r0, #169	@ 000a07fa a920
.org 0xa07fc
	bl 0x2b10	@ 000a07fc 62f788f9
.org 0xa0800
	adds r0, r4, #0	@ 000a0800 201c
.org 0xa0802
	bl 0xa0c18	@ 000a0802 00f009fa
.org 0xa0806
	ldrb r1, [r4, #10]	@ 000a0806 a17a
.org 0xa0808
	movs r0, #1	@ 000a0808 0120
.org 0xa080a
	orrs r0, r1	@ 000a080a 0843
.org 0xa080c
	strb r0, [r4, #10]	@ 000a080c a072
.org 0xa080e
	ldr r1, [pc, #112]	@ 000a080e 1c49
.org 0xa0810
	adds r0, r4, #0	@ 000a0810 201c
.org 0xa0812
	bl 0x1cf00	@ 000a0812 7cf775fb
.org 0xa0816
	ldrb r0, [r4, #15]	@ 000a0816 e07b
.org 0xa0818
	adds r0, #1	@ 000a0818 0130
.org 0xa081a
	strb r0, [r4, #15]	@ 000a081a e073
.org 0xa081c
	adds r0, r4, #0	@ 000a081c 201c
.org 0xa081e
	bl 0x1cff0	@ 000a081e 7cf7e7fb
.org 0xa0822
	adds r0, r4, #0	@ 000a0822 201c
.org 0xa0824
	adds r0, #116	@ 000a0824 7430
.org 0xa0826
	adds r1, r4, #0	@ 000a0826 211c
.org 0xa0828
	adds r1, #113	@ 000a0828 7131
.org 0xa082a
	ldrb r1, [r1, #0]	@ 000a082a 0978
.org 0xa082c
	lsls r1, r1, #24	@ 000a082c 0906
.org 0xa082e
	asrs r1, r1, #24	@ 000a082e 0916
.org 0xa0830
	add r1, sp	@ 000a0830 6944
.org 0xa0832
	ldrb r2, [r1, #0]	@ 000a0832 0a78
.org 0xa0834
	lsls r1, r2, #1	@ 000a0834 5100
.org 0xa0836
	adds r1, r1, r2	@ 000a0836 8918
.org 0xa0838
	lsls r1, r1, #3	@ 000a0838 c900
.org 0xa083a
	ldr r2, [pc, #72]	@ 000a083a 124a
.org 0xa083c
	adds r1, r1, r2	@ 000a083c 8918
.org 0xa083e
	bl 0x5784	@ 000a083e 64f7a1ff
.org 0xa0842
	adds r0, r4, #0	@ 000a0842 201c
.org 0xa0844
	adds r0, #115	@ 000a0844 7330
.org 0xa0846
	ldrb r0, [r0, #0]	@ 000a0846 0078
.org 0xa0848
	cmp r0, #3	@ 000a0848 0328
.org 0xa084a
	bne.n 0xa0874	@ 000a084a 13d1
.org 0xa084c
	ldrb r1, [r4, #10]	@ 000a084c a17a
.org 0xa084e
	movs r0, #254	@ 000a084e fe20
.org 0xa0850
	ands r0, r1	@ 000a0850 0840
.org 0xa0852
	movs r2, #0	@ 000a0852 0022
.org 0xa0854
	strb r0, [r4, #10]	@ 000a0854 a072
.org 0xa0856
	adds r0, r4, #0	@ 000a0856 201c
.org 0xa0858
	adds r0, #140	@ 000a0858 8c30
.org 0xa085a
	str r2, [r0, #0]	@ 000a085a 0260
.org 0xa085c
	adds r0, #4	@ 000a085c 0430
.org 0xa085e
	str r2, [r0, #0]	@ 000a085e 0260
.org 0xa0860
	adds r0, #4	@ 000a0860 0430
.org 0xa0862
	strb r2, [r0, #0]	@ 000a0862 0270
.org 0xa0864
	ldrb r1, [r4, #10]	@ 000a0864 a17a
.org 0xa0866
	movs r0, #251	@ 000a0866 fb20
.org 0xa0868
	ands r0, r1	@ 000a0868 0840
.org 0xa086a
	strb r0, [r4, #10]	@ 000a086a a072
.org 0xa086c
	movs r0, #4	@ 000a086c 0420
.org 0xa086e
	strb r0, [r4, #13]	@ 000a086e 6073
.org 0xa0870
	strb r2, [r4, #14]	@ 000a0870 a273
.org 0xa0872
	strb r2, [r4, #15]	@ 000a0872 e273
.org 0xa0874
	add sp, #4	@ 000a0874 01b0
.org 0xa0876
	pop {r4}	@ 000a0876 10bc
.org 0xa0878
	pop {r0}	@ 000a0878 01bc
.org 0xa087a
	bx r0	@ 000a087a 0047
