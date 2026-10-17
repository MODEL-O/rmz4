@ FUN_080b08fc  entry 0x080b08fc  size 124
.thumb
.org 0xb08fc
FUN_080b08fc:
	push {r4, lr}	@ 000b08fc 10b5
.org 0xb08fe
	adds r4, r0, #0	@ 000b08fe 041c
.org 0xb0900
	ldrb r0, [r4, #14]	@ 000b0900 a07b
.org 0xb0902
	cmp r0, #0	@ 000b0902 0028
.org 0xb0904
	bne.n 0xb0942	@ 000b0904 1dd1
.org 0xb0906
	ldr r0, [pc, #112]	@ 000b0906 1c48
.org 0xb0908
	str r0, [r4, #92]	@ 000b0908 e065
.org 0xb090a
	str r0, [r4, #96]	@ 000b090a 2066
.org 0xb090c
	adds r0, r4, #0	@ 000b090c 201c
.org 0xb090e
	adds r0, #116	@ 000b090e 7430
.org 0xb0910
	ldrb r2, [r4, #17]	@ 000b0910 627c
.org 0xb0912
	lsls r1, r2, #1	@ 000b0912 5100
.org 0xb0914
	adds r1, r1, r2	@ 000b0914 8918
.org 0xb0916
	lsls r1, r1, #3	@ 000b0916 c900
.org 0xb0918
	ldr r2, [pc, #96]	@ 000b0918 184a
.org 0xb091a
	adds r1, r1, r2	@ 000b091a 8918
.org 0xb091c
	bl 0x5784	@ 000b091c 54f732ff
.org 0xb0920
	ldr r0, [pc, #92]	@ 000b0920 1748
.org 0xb0922
	ldr r0, [r0, #0]	@ 000b0922 0068
.org 0xb0924
	ldr r1, [r0, #84]	@ 000b0924 416d
.org 0xb0926
	ldr r0, [r4, #84]	@ 000b0926 606d
.org 0xb0928
	cmp r1, r0	@ 000b0928 8142
.org 0xb092a
	ble.n 0xb093c	@ 000b092a 07dd
.org 0xb092c
	ldr r0, [r4, #92]	@ 000b092c e06d
.org 0xb092e
	lsls r0, r0, #8	@ 000b092e 0002
.org 0xb0930
	negs r0, r0	@ 000b0930 4042
.org 0xb0932
	cmp r0, #0	@ 000b0932 0028
.org 0xb0934
	bge.n 0xb0938	@ 000b0934 00da
.org 0xb0936
	adds r0, #255	@ 000b0936 ff30
.org 0xb0938
	asrs r0, r0, #8	@ 000b0938 0012
.org 0xb093a
	str r0, [r4, #92]	@ 000b093a e065
.org 0xb093c
	ldrb r0, [r4, #14]	@ 000b093c a07b
.org 0xb093e
	adds r0, #1	@ 000b093e 0130
.org 0xb0940
	strb r0, [r4, #14]	@ 000b0940 a073
.org 0xb0942
	ldr r0, [r4, #84]	@ 000b0942 606d
.org 0xb0944
	ldr r1, [r4, #92]	@ 000b0944 e16d
.org 0xb0946
	adds r0, r0, r1	@ 000b0946 4018
.org 0xb0948
	str r0, [r4, #84]	@ 000b0948 6065
.org 0xb094a
	ldr r1, [r4, #88]	@ 000b094a a16d
.org 0xb094c
	ldr r2, [r4, #96]	@ 000b094c 226e
.org 0xb094e
	adds r1, r1, r2	@ 000b094e 8918
.org 0xb0950
	str r1, [r4, #88]	@ 000b0950 a165
.org 0xb0952
	adds r2, #64	@ 000b0952 4032
.org 0xb0954
	str r2, [r4, #96]	@ 000b0954 2266
.org 0xb0956
	bl 0x7c7c	@ 000b0956 57f791f9
.org 0xb095a
	lsls r0, r0, #16	@ 000b095a 0004
.org 0xb095c
	cmp r0, #0	@ 000b095c 0028
.org 0xb095e
	beq.n 0xb0972	@ 000b095e 08d0
.org 0xb0960
	ldr r1, [pc, #32]	@ 000b0960 0849
.org 0xb0962
	ldrb r0, [r4, #9]	@ 000b0962 607a
.org 0xb0964
	lsls r0, r0, #2	@ 000b0964 8000
.org 0xb0966
	adds r0, r0, r1	@ 000b0966 4018
.org 0xb0968
	movs r1, #2	@ 000b0968 0221
.org 0xb096a
	str r1, [r4, #12]	@ 000b096a e160
.org 0xb096c
	ldr r0, [r0, #0]	@ 000b096c 0068
.org 0xb096e
	ldr r0, [r0, #8]	@ 000b096e 8068
.org 0xb0970
	str r0, [r4, #20]	@ 000b0970 6061
.org 0xb0972
	pop {r4}	@ 000b0972 10bc
.org 0xb0974
	pop {r0}	@ 000b0974 01bc
.org 0xb0976
	bx r0	@ 000b0976 0047
