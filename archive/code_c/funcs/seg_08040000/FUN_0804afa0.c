// undefined FUN_0804afa0(void)
// entry 0x804afa0


undefined4 FUN_0804afa0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0xb4);
  uVar3 = *(undefined4 *)(param_1 + 0xb8);
  if (*(byte *)(iVar7 + 0xc) < 2) {
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0x10) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
        FUN_08002b10(0x2b);
      }
      bVar1 = *(char *)(param_1 + 0x12) - 1;
      *(byte *)(param_1 + 0x12) = bVar1;
      if (bVar1 != 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        if (bVar1 < 0xc) {
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
          iVar7 = 0xc - (uint)*(byte *)(param_1 + 0x12);
          iVar5 = FUN_08128fb8(iVar7 * 0x100,0xc);
          iVar6 = FUN_08128fb8(iVar7 * -0x100,0xc);
          iVar6 = iVar6 + 0x100;
          iVar7 = iVar5 + 0x100;
        }
        else {
          iVar6 = 0x100;
          iVar7 = iVar6;
        }
        *(short *)(param_1 + 0x50) = (short)iVar7;
        *(short *)(param_1 + 0x52) = (short)iVar6;
        iVar7 = iVar6 + 0x10;
        if (iVar7 < 0) {
          iVar7 = iVar6 + 0x2f;
        }
        iVar7 = iVar7 >> 5;
        if (iVar7 == 0) {
          return in_lr;
        }
        cVar2 = FUN_0803a4e8(uVar3);
        if (7 < iVar7) {
          iVar7 = 7;
        }
        FUN_08005794(param_1 + 0x74,iVar7 * 0x30 + DAT_0804b0b0,cVar2 + '\b',0xffffffff,0xffffffff,
                     0xffffffff);
        return in_lr;
      }
    }
    else if (*(byte *)(iVar7 + 0xc) < 2) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar7 + 0x58);
      *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(iVar7 + 0x50);
      *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(iVar7 + 0x52);
      return in_lr;
    }
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804b100);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_0804b104(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804aff0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 0xc);
  }
  return in_lr;
}


