// undefined FUN_08028db8(void)
// entry 0x8028db8


undefined8 FUN_08028db8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0xc) + 1);
  if (bVar1 == 1) {
    uVar4 = *(uint *)(param_1 + 0x158);
    if (uVar4 != 0xffffffff) {
      FUN_08002a98(uVar4 & 0xffff);
      *(uint *)(param_1 + 0x158) = 0xffffffff;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar4 = *(uint *)(param_1 + 0x158);
      if (uVar4 != 0xffffffff) {
        FUN_08002a98(uVar4 & 0xffff);
      }
      FUN_08002a88(*(undefined2 *)(*(int *)(param_1 + 0xc) + 4));
      *(uint *)(param_1 + 0x158) = *(uint *)(*(int *)(param_1 + 0xc) + 4);
    }
  }
  else if (((bVar1 == 2) && (*(uint *)(param_1 + 0x158) != 0xffffffff)) &&
          (iVar2 = FUN_08002ad0(*(uint *)(param_1 + 0x158) & 0xffff), iVar2 != 0)) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -8;
    uVar3 = 1;
    goto LAB_08028e40;
  }
  uVar3 = 0;
LAB_08028e40:
  return CONCAT44(in_lr,uVar3);
}


