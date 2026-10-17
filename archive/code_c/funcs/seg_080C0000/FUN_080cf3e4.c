// undefined FUN_080cf3e4(void)
// entry 0x80cf3e4


undefined4 FUN_080cf3e4(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined1 auStack_2c [4];
  undefined4 local_28 [3];
  byte abStack_1c [4];
  
  FUN_08129258(auStack_2c,DAT_080cf4b4,3);
  local_28[0] = *DAT_080cf4b8;
  local_28[1] = DAT_080cf4b8[1];
  local_28[2] = DAT_080cf4b8[2];
  FUN_08129258(abStack_1c,DAT_080cf4bc,3);
  bVar1 = *(byte *)(param_1 + 0x10);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cf4c0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined1 *)(param_1 + 0xd) = auStack_2c[bVar1];
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,*(undefined2 *)(local_28 + bVar1));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,(uint)abStack_1c[bVar1] * 0x18 + DAT_080cf4c4,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080cf4c8(param_1);
  return in_lr;
}


