// undefined FUN_080927a4(void)
// entry 0x80927a4


undefined4 FUN_080927a4(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08002b10(0x6b);
    FUN_0801cfc8(param_1,*(undefined2 *)
                          (((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2U) + DAT_08092890),
                 *(undefined1 *)(param_1 + 0x71),3);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar3 = *(uint *)(param_1 + 0xc0) + 1;
    *(uint *)(param_1 + 0xc0) = uVar3;
    if (((uVar3 <= DAT_08092894) && (*(char *)(*DAT_08092898 + 0x278) != '\0')) &&
       (bVar1 = *(char *)(param_1 + 0x12) + 1, *(byte *)(param_1 + 0x12) = bVar1, 0x30 < bVar1)) {
      FUN_08092b70(param_1);
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    uVar3 = FUN_0801fb14(DAT_0809289c,param_1 + 0x54);
    if (0x4000 < uVar3) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080928a0);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
    }
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


