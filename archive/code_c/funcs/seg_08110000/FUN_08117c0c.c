// undefined FUN_08117c0c(void)
// entry 0x8117c0c


undefined4 FUN_08117c0c(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + DAT_08117cf4);
  *(undefined2 *)(param_1 + 4) = 0;
  iVar2 = DAT_08117cfc;
  iVar6 = DAT_08117cf8 + param_1;
  *(undefined1 *)(param_1 + DAT_08117cfc) = *(undefined1 *)(iVar5 + 0xc0);
  *(undefined1 *)(param_1 + iVar2 + 1) = *(undefined1 *)(iVar5 + 0xc1);
  iVar3 = DAT_08117d00;
  *(undefined1 *)(param_1 + DAT_08117d00) = *(undefined1 *)(iVar5 + 0xc2);
  *(char *)(param_1 + iVar2 + 4) =
       *(char *)(iVar5 + 0xf3) + *(char *)(iVar5 + 0xf2) + *(char *)(iVar5 + 0xf1);
  *(undefined1 *)(param_1 + iVar3 + 0x12) = *(undefined1 *)(DAT_08117d04 + 0x10);
  *(undefined1 *)(param_1 + DAT_08117d08) = *(undefined1 *)(iVar5 + 0xdf);
  pbVar7 = (byte *)(param_1 + DAT_08117d0c);
  *pbVar7 = 0;
  FUN_08117f98(param_1);
  puVar1 = DAT_08117d10;
  *DAT_08117d10 = (ushort)DAT_08117d14 & *DAT_08117d10 & (ushort)DAT_08117d18 | 0x1300;
  puVar1[3] = (ushort)DAT_08117d1c;
  puVar1[8] = 0;
  puVar1[9] = 0;
  FUN_08001d30(DAT_08117d20,0x4000);
  FUN_08002208(DAT_08117d24,0);
  FUN_08128f80(param_1,*(undefined4 *)((uint)*pbVar7 * 4 + DAT_08117d28));
  *(undefined1 *)(param_1 + 2) = 1;
  uVar4 = FUN_0810abe4(param_1,0,0);
  *(undefined4 *)(iVar6 + 0x20) = uVar4;
  FUN_0800249c(0x12,0);
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_08117d2c(param_1);
  return in_lr;
}


