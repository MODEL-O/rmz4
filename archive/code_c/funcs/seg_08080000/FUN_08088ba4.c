// undefined FUN_08088ba4(void)
// entry 0x8088ba4


undefined4 FUN_08088ba4(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x2c);
  iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (((*(uint *)(param_1 + 0x14) & 8) != 0) &&
     (((*(uint *)(param_1 + 0x14) & 0x10000) != 0 || (*(ushort *)(iVar5 + 8) == DAT_08088bf0)))) {
    *(undefined1 *)(iVar7 + 0xb9) = 1;
  }
  piVar3 = DAT_08088c50;
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar5 = *(int *)(iVar5 + 0x54);
    iVar6 = *(int *)(iVar7 + 0x54);
    if (iVar5 < iVar6) {
      *(undefined1 *)(iVar7 + 0xb6) = 0;
      piVar3 = DAT_08088bf4;
    }
    else if (iVar6 < iVar5) {
      *(undefined1 *)(iVar7 + 0xb6) = 1;
      piVar3 = DAT_08088c08;
    }
    else {
      *(bool *)(iVar7 + 0xb6) = iVar6 < *(int *)(*DAT_08088c50 + 0x54);
    }
    iVar5 = *piVar3;
    uVar4 = *(uint *)(param_1 + 0x14);
    if ((uVar4 & 0x200) == 0) {
      if (((*(char *)(iVar7 + 0xb5) != '\0') && ((uVar4 & 0x20000) != 0)) && (iVar5 != 0)) {
        cVar2 = FUN_0803a578(iVar5,4,4);
        *(char *)(iVar7 + 0xb8) = cVar2;
        if (cVar2 != '\0') {
          *(undefined1 *)(iVar7 + 0xd) = 7;
          *(undefined1 *)(iVar7 + 0xe) = 0;
          *(undefined1 *)(iVar7 + 0xf) = 0;
        }
      }
    }
    else if (((uVar4 & 0x20000) != 0) && (iVar5 != 0)) {
      uVar1 = FUN_0803a578(iVar5,3,6);
      *(undefined1 *)(iVar7 + 0xb7) = uVar1;
    }
  }
  return in_lr;
}


