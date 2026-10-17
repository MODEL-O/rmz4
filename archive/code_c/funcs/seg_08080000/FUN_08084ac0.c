// undefined FUN_08084ac0(void)
// entry 0x8084ac0


undefined8 FUN_08084ac0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    uVar2 = 0;
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08084b00);
    uVar3 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    if ((*(byte *)(param_1 + 0x10) < 2) && (uVar3 = 0, (*(uint *)(param_1 + 0x8c) & 0x10000) != 0))
    {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = uVar3;
    }
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}


