// undefined FUN_0810e370(void)
// entry 0x810e370


undefined4 FUN_0810e370(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *param_1;
  *DAT_0810e46c = *DAT_0810e46c | 0x100;
  uVar5 = *(undefined4 *)param_1[4];
  sVar4 = FUN_08128fb8(uVar5,600);
  sVar4 = sVar4 * 2;
  *(short *)(iVar8 + 0x68) = sVar4 + 0x1380;
  sVar1 = (short)DAT_0810e470;
  *(short *)(iVar8 + 0x6a) = sVar4 + sVar1;
  sVar2 = (short)DAT_0810e474;
  *(short *)(iVar8 + 0xa8) = sVar4 + sVar2;
  sVar3 = (short)DAT_0810e478;
  *(short *)(iVar8 + 0xaa) = sVar4 + sVar3;
  uVar6 = FUN_08128fb8(uVar5,0x3c);
  sVar4 = FUN_08129050(uVar6,10);
  sVar4 = sVar4 * 2;
  *(short *)(iVar8 + 0x6c) = sVar4 + 0x1380;
  *(short *)(iVar8 + 0x6e) = sVar4 + sVar1;
  *(short *)(iVar8 + 0xac) = sVar4 + sVar2;
  *(short *)(iVar8 + 0xae) = sVar4 + sVar3;
  sVar4 = (short)DAT_0810e47c;
  *(short *)(iVar8 + 0x70) = sVar4;
  *(short *)(iVar8 + 0xb0) = sVar4 + 0x15;
  iVar7 = FUN_08129050(uVar5,0x3c);
  sVar4 = FUN_08128fb8(iVar7,6);
  sVar4 = sVar4 * 2;
  *(short *)(iVar8 + 0x72) = sVar4 + 0x1380;
  *(short *)(iVar8 + 0x74) = sVar4 + sVar1;
  *(short *)(iVar8 + 0xb2) = sVar4 + sVar2;
  *(short *)(iVar8 + 0xb4) = sVar4 + sVar3;
  uVar5 = FUN_08128fb8(iVar7 * 100,0x3c);
  sVar4 = FUN_08129050(uVar5,10);
  sVar4 = sVar4 * 2;
  *(short *)(iVar8 + 0x76) = sVar4 + 0x1380;
  *(short *)(iVar8 + 0x78) = sVar4 + sVar1;
  *(short *)(iVar8 + 0xb6) = sVar4 + sVar2;
  *(short *)(iVar8 + 0xb8) = sVar4 + sVar3;
  return in_lr;
}


