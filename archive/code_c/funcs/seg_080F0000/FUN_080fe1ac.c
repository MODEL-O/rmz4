// undefined FUN_080fe1ac(void)
// entry 0x80fe1ac


undefined4 FUN_080fe1ac(int param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  bool bVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    FUN_080fe4d0(param_1 + 0x54,1);
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    iVar6 = *(int *)(param_1 + 0x58);
    iVar5 = DAT_080fe234 + iVar6;
    sVar1 = FUN_080146bc(uVar4,iVar6 + DAT_080fe238);
    bVar7 = sVar1 != 0;
    uVar2 = (uint)bVar7;
    sVar1 = FUN_080146bc(uVar4,iVar6 + 0x800);
    bVar8 = sVar1 != 0;
    if (bVar8) {
      uVar2 = uVar2 + 1;
    }
    if (uVar2 == 0) {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fe23c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    }
    else if ((int)(uVar2 - 1) <= (int)*(short *)(*DAT_080fe268 + 10)) {
      if (bVar7) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080fe26c;
        bVar7 = !bVar7;
      }
      else if (bVar8) {
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1000;
        bVar8 = false;
      }
      FUN_080fe4d0(param_1 + 0x54,0);
      FUN_08014720(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080fe2dc);
      if (bVar7) {
        FUN_080fe400(param_1,uVar4,DAT_080fe2e0 + iVar5);
      }
      if (bVar8) {
        FUN_080fe400(param_1,uVar4,iVar5 + 0x1000);
      }
      FUN_080fe0b4(param_1);
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  return in_lr;
}


