// undefined FUN_080a50cc(void)
// entry 0x80a50cc


undefined4 FUN_080a50cc(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  byte abStack_10 [4];
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08129258(abStack_10,DAT_080a5114,4);
    FUN_08005784(param_1 + 0x74,(uint)abStack_10[bVar1] * 0x18 + DAT_080a5118);
    if ((*(byte *)(DAT_080a511c + DAT_080a5120) & 0xf) == 2) {
      uVar2 = 0xb4;
    }
    else {
      uVar2 = 0x78;
    }
    *(undefined4 *)(param_1 + 0xb8) = uVar2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar4 = *(uint *)(param_1 + 0xb8) - 1;
  *(uint *)(param_1 + 0xb8) = uVar4;
  if (uVar4 == 0) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a515c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080a5188(param_1);
  }
  else {
    if ((int)uVar4 < 0x1e) {
      if ((uVar4 & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


