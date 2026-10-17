// undefined FUN_08049b30(void)
// entry 0x8049b30


undefined4 FUN_08049b30(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = *(uint *)(param_1 + 0x8c);
  if ((uVar4 & 0x204) != 0) {
    if ((uVar4 & 0x200) != 0) {
      FUN_0802ab88(1,0xff,param_1 + 0x54);
    }
    FUN_080d0c88(2,param_1 + 0x54);
    FUN_08002b10(0x2a);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08049b84);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_08049814(param_1);
    return in_lr;
  }
  FUN_0801cff0(param_1);
  piVar3 = DAT_08049c44;
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_08049bc4 + 0x54)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0x12) = 0x30;
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      uVar4 = FUN_0801fb14(DAT_08049d34,param_1 + 0x54);
      if (uVar4 < 0x1001) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08049d38);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
      return in_lr;
    }
    if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_08049c44 + 0x54)) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    uVar4 = FUN_08128bdc((*(int *)(*piVar3 + 0x54) - *(int *)(param_1 + 0x54)) * 0x10 >> 0x10,
                         (*(int *)(*piVar3 + 0x58) - (*(int *)(param_1 + 0x58) + 0xf00)) * 0x10 >>
                         0x10);
    iVar1 = DAT_08049cd4;
    uVar4 = (int)((uVar4 & 0xffff) + 0x4000) >> 8;
    *(int *)(param_1 + 0x5c) = (int)*(short *)((uVar4 & 0xff) * 2 + DAT_08049cd4) << 2;
    *(int *)(param_1 + 0x60) =
         (int)*(short *)((uVar4 * 0x1000000 + 0xc0000000 >> 0x17) + iVar1) << 2;
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    FUN_08002b10(0x6b);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


