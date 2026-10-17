// undefined FUN_08043a08(void)
// entry 0x8043a08


undefined4 FUN_08043a08(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x2c) + 0xfa) == '\x02') {
    if (*(char *)(param_1 + 0xd) == '\0') {
      FUN_080d0c88(2,param_1 + 0x54);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08043a60);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar1 = FUN_08043b94(param_1,3);
    if ((cVar1 != '\x01') && ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0)) {
      if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
        FUN_080d0c88(1,param_1 + 0x54);
LAB_08043ae6:
        piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08043b00);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
        FUN_08043b34(param_1);
        return in_lr;
      }
      goto LAB_08043b20;
    }
    FUN_0801cf00(param_1,DAT_08043abc);
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
    FUN_08005794(param_1 + 0x74,DAT_08043ac0,7,0xffffffff,0xffffffff,0xffffffff);
    FUN_08002b10(0x3d);
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      if (*(char *)(param_1 + 0x73) == '\x03') goto LAB_08043ae6;
      goto LAB_08043b20;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto LAB_08043b20;
    FUN_0801cf00(param_1,DAT_08043b30);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08043b20:
  FUN_0801cff0(param_1);
  return in_lr;
}


