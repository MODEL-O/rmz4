// undefined FUN_080cf72c(void)
// entry 0x80cf72c


undefined4 FUN_080cf72c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      FUN_080cf36c(*(undefined4 *)(param_1 + 0x28),param_1 + 0x54,2,0);
      uVar1 = DAT_080cf750;
    }
    else {
      uVar1 = 0x340;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar2 = FUN_0801fb14(DAT_080cf7a0,param_1 + 0x54);
  if (0x1000 < uVar2) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cf7a4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080cf7a8(param_1);
  }
  return in_lr;
}


