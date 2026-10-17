// undefined FUN_0811187c(void)
// entry 0x811187c


undefined4 FUN_0811187c(int param_1)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  *DAT_081118d0 = 0;
  iVar2 = DAT_081118d4;
  *(undefined1 *)(DAT_081118d4 + DAT_081118d8) = 0x20;
  *(undefined1 *)(iVar2 + DAT_081118dc) = 0x20;
  *(undefined1 *)(iVar2 + 0x400) = 0x20;
  puVar3 = DAT_081118e0;
  *DAT_081118e0 = (ushort)DAT_081118e4 & *DAT_081118e0;
  puVar3[2] = (ushort)DAT_081118e8;
  FUN_08002624(0x89);
  FUN_0810d568();
  bVar1 = *(byte *)(param_1 + 0x254);
  if (bVar1 == 1) {
    uVar5 = 0x100;
    uVar4 = DAT_08111918;
LAB_08111920:
    FUN_081126ac(uVar4,uVar5);
    FUN_0810f6f8(param_1,5);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        FUN_081126ac(DAT_08111908,0);
        FUN_0810f6f8(param_1,DAT_0811190c);
        return in_lr;
      }
    }
    else {
      if (bVar1 == 2) {
        uVar5 = 6;
        uVar4 = DAT_08111930;
        goto LAB_08111920;
      }
      if (bVar1 == 3) {
        FUN_0810f6f8(param_1,6);
        return in_lr;
      }
    }
    if ((*(ushort *)(param_1 + 0x12) & 1) == 0) {
      FUN_0810f6f8(param_1,2);
    }
    else {
      FUN_0810f6f8(param_1,3);
    }
  }
  return in_lr;
}


