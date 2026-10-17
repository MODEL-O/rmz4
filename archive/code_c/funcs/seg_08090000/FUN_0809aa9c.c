// undefined FUN_0809aa9c(void)
// entry 0x809aa9c


undefined4 FUN_0809aa9c(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (((*(uint *)(param_1 + 0x8c) & 4) == 0) && (*(byte *)(iVar6 + 0xc) < 2)) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      if ((*(byte *)(iVar6 + 10) & 0x10) == 0) {
        iVar5 = *(int *)(iVar6 + 0x54) +
                *(int *)((*(byte *)(param_1 + 0x11) & 7) * 4 + DAT_0809ab64);
      }
      else {
        iVar5 = *(int *)(iVar6 + 0x54) -
                *(int *)((*(byte *)(param_1 + 0x11) & 7) * 4 + DAT_0809aadc);
      }
      *(int *)(param_1 + 0x54) = iVar5;
      *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + DAT_0809ab68;
      cVar1 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar1;
      if (cVar1 == -1) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        FUN_08005760(param_1 + 0x74,DAT_0809ab6c,param_1 + 0x54,8);
        *(int *)(param_1 + 0xa0) = param_1;
        *(undefined4 *)(param_1 + 0x98) = 0;
        if (*(byte *)(param_1 + 0x11) < 0x10) {
          FUN_08099f0c(iVar6,5,*(byte *)(param_1 + 0x11) + 8);
        }
        FUN_0801cf00(param_1,DAT_0809ab70);
        if (*(char *)(param_1 + 0x11) == '\0') {
          FUN_08002b10(0x120);
        }
        FUN_08002b10(0x13a);
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
    else {
      if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) goto LAB_0809abcc;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    }
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0xd) == '\0') {
      return in_lr;
    }
    sVar2 = *(short *)(param_1 + 0xbe);
    if (sVar2 != 0) {
      *(short *)(param_1 + 0xbe) = sVar2 + -1;
      return in_lr;
    }
    sVar2 = FUN_08007020(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      return in_lr;
    }
    uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
LAB_0809abcc:
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809abe8);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  FUN_08099ff4(param_1);
  return in_lr;
}


