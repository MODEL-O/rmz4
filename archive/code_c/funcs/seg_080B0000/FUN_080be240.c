// undefined FUN_080be240(void)
// entry 0x80be240


undefined8 FUN_080be240(undefined4 param_1,int *param_2,byte param_3,undefined1 param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_080be2c0);
  if (iVar3 != 0) {
    *(undefined1 *)(iVar3 + 0x25) = 8;
    iVar1 = DAT_080be2c4;
    *(undefined1 *)(iVar3 + 9) = 3;
    *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar1 + 0xc);
    *(undefined2 *)(iVar3 + 0x20) = 0;
    *(undefined1 *)(iVar3 + 0x22) = 0;
    iVar1 = DAT_080be2c8;
    iVar4 = (uint)param_3 * 8;
    *(int *)(iVar3 + 0x54) = *param_2 + *(int *)(iVar4 + DAT_080be2c8);
    *(int *)(iVar3 + 0x58) = param_2[1] + *(int *)(iVar4 + iVar1 + 4);
    *(undefined4 *)(iVar3 + 0x28) = param_1;
    *(undefined4 *)(iVar3 + 0xb4) = param_1;
    *(undefined1 *)(iVar3 + 0x10) = param_4;
    *(undefined1 *)(iVar3 + 0x11) = 0;
    if (param_3 == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(byte *)(iVar3 + 0x4c) = param_3 & 1;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | (param_3 & 1) << 4;
  }
  return CONCAT44(in_lr,iVar3);
}


