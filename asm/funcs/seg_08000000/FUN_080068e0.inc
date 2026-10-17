@ FUN_080068e0  entry 0x080068e0  size 98
.thumb
.org 0x68e0
FUN_080068e0:
	push {r4, r5, r6, lr}	@ 000068e0 70b5
.org 0x68e2
	movs r6, #0	@ 000068e2 0026
.org 0x68e4
	ldr r5, [pc, #92]	@ 000068e4 174d
.org 0x68e6
	ldrb r0, [r5, #18]	@ 000068e6 a87c
.org 0x68e8
	ldr r4, [pc, #92]	@ 000068e8 174c
.org 0x68ea
	movs r3, #255	@ 000068ea ff23
.org 0x68ec
	ldrb r1, [r4, #20]	@ 000068ec 217d
.org 0x68ee
	cmp r0, r1	@ 000068ee 8842
.org 0x68f0
	beq.n 0x6938	@ 000068f0 22d0
.org 0x68f2
	ldrb r2, [r5, #19]	@ 000068f2 ea7c
.org 0x68f4
	ldrh r1, [r4, #22]	@ 000068f4 e18a
.org 0x68f6
	adds r0, r3, #0	@ 000068f6 181c
.org 0x68f8
	ands r0, r1	@ 000068f8 0840
.org 0x68fa
	cmp r2, r0	@ 000068fa 8242
.org 0x68fc
	beq.n 0x6938	@ 000068fc 1cd0
.org 0x68fe
	ldrb r2, [r5, #20]	@ 000068fe 2a7d
.org 0x6900
	ldrh r1, [r4, #24]	@ 00006900 218b
.org 0x6902
	adds r0, r3, #0	@ 00006902 181c
.org 0x6904
	ands r0, r1	@ 00006904 0840
.org 0x6906
	cmp r2, r0	@ 00006906 8242
.org 0x6908
	beq.n 0x6938	@ 00006908 16d0
.org 0x690a
	ldrb r2, [r5, #21]	@ 0000690a 6a7d
.org 0x690c
	ldrh r1, [r4, #26]	@ 0000690c 618b
.org 0x690e
	adds r0, r3, #0	@ 0000690e 181c
.org 0x6910
	ands r0, r1	@ 00006910 0840
.org 0x6912
	cmp r2, r0	@ 00006912 8242
.org 0x6914
	beq.n 0x6938	@ 00006914 10d0
.org 0x6916
	ldrb r2, [r5, #22]	@ 00006916 aa7d
.org 0x6918
	ldrh r1, [r4, #28]	@ 00006918 a18b
.org 0x691a
	adds r0, r3, #0	@ 0000691a 181c
.org 0x691c
	ands r0, r1	@ 0000691c 0840
.org 0x691e
	cmp r2, r0	@ 0000691e 8242
.org 0x6920
	beq.n 0x6938	@ 00006920 0ad0
.org 0x6922
	ldrb r2, [r5, #23]	@ 00006922 ea7d
.org 0x6924
	ldrh r1, [r4, #30]	@ 00006924 e18b
.org 0x6926
	adds r0, r3, #0	@ 00006926 181c
.org 0x6928
	ands r0, r1	@ 00006928 0840
.org 0x692a
	cmp r2, r0	@ 0000692a 8242
.org 0x692c
	beq.n 0x6938	@ 0000692c 04d0
.org 0x692e
	ldrb r1, [r5, #24]	@ 0000692e 297e
.org 0x6930
	ldrh r0, [r4, #32]	@ 00006930 208c
.org 0x6932
	ands r3, r0	@ 00006932 0340
.org 0x6934
	cmp r1, r3	@ 00006934 9942
.org 0x6936
	bne.n 0x693a	@ 00006936 00d1
.org 0x6938
	movs r6, #1	@ 00006938 0126
.org 0x693a
	adds r0, r6, #0	@ 0000693a 301c
.org 0x693c
	pop {r4, r5, r6}	@ 0000693c 70bc
.org 0x693e
	pop {r1}	@ 0000693e 02bc
.org 0x6940
	bx r1	@ 00006940 0847
