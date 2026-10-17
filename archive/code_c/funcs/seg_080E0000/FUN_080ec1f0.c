// undefined FUN_080ec1f0(void)
// entry 0x80ec1f0


undefined4 FUN_080ec1f0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x54) = 0x71800;
    *(undefined4 *)(param_1 + 0x58) = 0x20800;
    if (*(char *)(param_1 + 0xd) != '\0') {
      iVar2 = *(int *)(param_1 + 100);
      iVar7 = *(int *)(param_1 + 0x68);
      iVar5 = *(int *)(param_1 + 0x5c);
      iVar3 = *(int *)(param_1 + 0x60);
      if (*(char *)(param_1 + 0x10) == '\x01') {
        sVar1 = FUN_0800c66c(iVar2,iVar7);
        if (sVar1 != 0) {
          FUN_080ebe6c(param_1,iVar2,iVar7);
        }
        iVar6 = iVar2 + iVar5;
        iVar8 = iVar7 + iVar3;
        sVar1 = FUN_0800c66c(iVar6,iVar8);
        if (sVar1 != 0) {
          FUN_080ebe6c(param_1,iVar6,iVar8);
        }
        iVar7 = iVar7 - iVar3;
        sVar1 = FUN_0800c66c(iVar6,iVar7);
        if (sVar1 != 0) {
          FUN_080ebe6c(param_1,iVar6,iVar7);
        }
        iVar2 = iVar2 - iVar5;
        sVar1 = FUN_0800c66c(iVar2,iVar8);
        if (sVar1 != 0) {
          FUN_080ebe6c(param_1,iVar2,iVar8);
        }
        sVar1 = FUN_0800c66c(iVar2,iVar7);
        if (sVar1 != 0) {
          FUN_080ebe6c(param_1,iVar2,iVar7);
        }
      }
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
  }
  else {
    sVar1 = FUN_080ebfc8(param_1);
    if (sVar1 == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ec308);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
    }
  }
  return in_lr;
}


