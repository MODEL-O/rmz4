// undefined FUN_0809a680(void)
// entry 0x809a680


undefined4 FUN_0809a680(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar6;
  iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar5;
  cVar1 = FUN_08129198(*(undefined1 *)(param_1 + 0x11),3);
  if (cVar1 == '\x02') {
    sVar2 = FUN_08007c7c(iVar6,iVar5);
    if (sVar2 == 0) {
LAB_0809a708:
      if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
        return in_lr;
      }
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809a734);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      FUN_08099ff4(param_1);
      return in_lr;
    }
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809a6cc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  else {
    uVar4 = FUN_0801fb14(DAT_0809a700,param_1 + 0x54);
    if (uVar4 < 0x1001) goto LAB_0809a708;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809a704);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    *(undefined1 *)(param_1 + 0x12) = 2;
  }
  FUN_08099ff4(param_1);
  return in_lr;
}


