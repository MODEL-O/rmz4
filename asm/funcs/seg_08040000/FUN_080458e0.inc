@ FUN_080458e0  entry 0x080458e0  size 200
.thumb
.org 0x458e0
FUN_080458e0:
	push {r4, r5, r6, lr}	@ 000458e0 70b5
.org 0x458e2
	adds r6, r0, #0	@ 000458e2 061c
.org 0x458e4
	ldr r1, [pc, #88]	@ 000458e4 1649
.org 0x458e6
	ldrb r0, [r6, #9]	@ 000458e6 707a
.org 0x458e8
	lsls r0, r0, #2	@ 000458e8 8000
.org 0x458ea
	adds r0, r0, r1	@ 000458ea 4018
.org 0x458ec
	movs r1, #1	@ 000458ec 0121
.org 0x458ee
	str r1, [r6, #12]	@ 000458ee f160
.org 0x458f0
	ldr r0, [r0, #0]	@ 000458f0 0068
.org 0x458f2
	ldr r0, [r0, #4]	@ 000458f2 4068
.org 0x458f4
	str r0, [r6, #20]	@ 000458f4 7061
.org 0x458f6
	adds r0, r6, #0	@ 000458f6 301c
.org 0x458f8
	bl 0x1cc9c	@ 000458f8 d7f7d0f9
.org 0x458fc
	adds r0, r6, #0	@ 000458fc 301c
.org 0x458fe
	bl 0x1ceec	@ 000458fe d7f7f5fa
.org 0x45902
	ldrb r1, [r6, #10]	@ 00045902 b17a
.org 0x45904
	movs r0, #1	@ 00045904 0120
.org 0x45906
	orrs r0, r1	@ 00045906 0843
.org 0x45908
	movs r1, #2	@ 00045908 0221
.org 0x4590a
	orrs r0, r1	@ 0004590a 0843
.org 0x4590c
	strb r0, [r6, #10]	@ 0004590c b072
.org 0x4590e
	adds r0, r6, #0	@ 0004590e 301c
.org 0x45910
	movs r1, #1	@ 00045910 0121
.org 0x45912
	bl 0x3ad84	@ 00045912 f5f737fa
.org 0x45916
	adds r1, r6, #0	@ 00045916 311c
.org 0x45918
	adds r1, #188	@ 00045918 bc31
.org 0x4591a
	ldr r0, [r6, #84]	@ 0004591a 706d
.org 0x4591c
	str r0, [r1, #0]	@ 0004591c 0860
.org 0x4591e
	adds r1, #4	@ 0004591e 0431
.org 0x45920
	ldr r0, [r6, #88]	@ 00045920 b06d
.org 0x45922
	str r0, [r1, #0]	@ 00045922 0860
.org 0x45924
	ldrb r1, [r6, #10]	@ 00045924 b17a
.org 0x45926
	movs r0, #16	@ 00045926 1020
.org 0x45928
	ands r0, r1	@ 00045928 0840
.org 0x4592a
	lsls r0, r0, #24	@ 0004592a 0006
.org 0x4592c
	lsrs r2, r0, #24	@ 0004592c 020e
.org 0x4592e
	cmp r2, #0	@ 0004592e 002a
.org 0x45930
	beq.n 0x45944	@ 00045930 08d0
.org 0x45932
	ldr r1, [r6, #84]	@ 00045932 716d
.org 0x45934
	ldr r0, [r6, #100]	@ 00045934 706e
.org 0x45936
	cmp r1, r0	@ 00045936 8142
.org 0x45938
	ble.n 0x4594e	@ 00045938 09dd
.org 0x4593a
	movs r0, #0	@ 0004593a 0020
.org 0x4593c
	str r0, [r6, #100]	@ 0004593c 7066
.org 0x4593e
	b.n 0x4594e	@ 0004593e 06e0
.org 0x45940
	.byte 0xf8,0x39,0x85,0x08	@ 00045940 data
.org 0x45944
	ldr r1, [r6, #84]	@ 00045944 716d
.org 0x45946
	ldr r0, [r6, #100]	@ 00045946 706e
.org 0x45948
	cmp r1, r0	@ 00045948 8142
.org 0x4594a
	bge.n 0x4594e	@ 0004594a 00da
.org 0x4594c
	str r2, [r6, #100]	@ 0004594c 7266
.org 0x4594e
	ldr r1, [pc, #56]	@ 0004594e 0e49
.org 0x45950
	adds r0, r6, #0	@ 00045950 301c
.org 0x45952
	bl 0x1cf00	@ 00045952 d7f7d5fa
.org 0x45956
	ldrb r1, [r6, #10]	@ 00045956 b17a
.org 0x45958
	movs r0, #4	@ 00045958 0420
.org 0x4595a
	movs r5, #0	@ 0004595a 0025
.org 0x4595c
	orrs r0, r1	@ 0004595c 0843
.org 0x4595e
	strb r0, [r6, #10]	@ 0004595e b072
.org 0x45960
	adds r4, r6, #0	@ 00045960 341c
.org 0x45962
	adds r4, #116	@ 00045962 7434
.org 0x45964
	ldr r1, [pc, #36]	@ 00045964 0949
.org 0x45966
	adds r2, r6, #0	@ 00045966 321c
.org 0x45968
	adds r2, #84	@ 00045968 5432
.org 0x4596a
	adds r0, r4, #0	@ 0004596a 201c
.org 0x4596c
	movs r3, #8	@ 0004596c 0823
.org 0x4596e
	bl 0x5760	@ 0004596e bff7f7fe
.org 0x45972
	str r6, [r4, #44]	@ 00045972 e662
.org 0x45974
	str r5, [r4, #36]	@ 00045974 6562
.org 0x45976
	ldrb r1, [r6, #10]	@ 00045976 b17a
.org 0x45978
	movs r0, #16	@ 00045978 1020
.org 0x4597a
	ands r0, r1	@ 0004597a 0840
.org 0x4597c
	cmp r0, #0	@ 0004597c 0028
.org 0x4597e
	beq.n 0x45990	@ 0004597e 07d0
.org 0x45980
	movs r0, #192	@ 00045980 c020
.org 0x45982
	lsls r0, r0, #3	@ 00045982 c000
.org 0x45984
	b.n 0x45992	@ 00045984 05e0
.org 0x45986
	.byte 0x00	@ 00045986 data
.org 0x45987
	.byte 0x00	@ 00045987 data
.org 0x45988
	.byte 0x06,0x84,0x00,0x00	@ 00045988 data
.org 0x4598c
	.byte 0x24,0x6c,0x85,0x08	@ 0004598c data
.org 0x45990
	ldr r0, [pc, #36]	@ 00045990 0948
.org 0x45992
	str r0, [r6, #92]	@ 00045992 f065
.org 0x45994
	movs r0, #0	@ 00045994 0020
.org 0x45996
	str r0, [r6, #96]	@ 00045996 3066
.org 0x45998
	adds r0, r6, #0	@ 00045998 301c
.org 0x4599a
	bl 0x1cff0	@ 0004599a d7f729fb
.org 0x4599e
	ldr r0, [pc, #28]	@ 0004599e 0748
.org 0x459a0
	str r0, [r4, #36]	@ 000459a0 6062
.org 0x459a2
	ldr r0, [r6, #44]	@ 000459a2 f06a
.org 0x459a4
	adds r1, r6, #0	@ 000459a4 311c
.org 0x459a6
	bl 0x457a4	@ 000459a6 fff7fdfe
