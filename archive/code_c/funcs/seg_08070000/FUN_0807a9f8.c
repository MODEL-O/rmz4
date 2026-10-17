// undefined FUN_0807a9f8(void)
// entry 0x807a9f8


undefined4 FUN_0807a9f8(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0807aa6c);
    FUN_08001d30(DAT_0807aa70,
                 ((uint)*(ushort *)(DAT_0807aa74 + 0x1ac) -
                 (uint)(*(ushort *)(DAT_0807aa70 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0807aa78,
                 ((uint)*(ushort *)(DAT_0807aa7c + 0x1ac) - (uint)*(byte *)(DAT_0807aa78 + 7)) *
                 0x20 + 0x200);
    FUN_08002b10(0x1a8);
    *(undefined1 *)(param_1 + 0x12) = 0x7f;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0807abf4) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0807abf4 - 2);
    FUN_0801cff0(param_1);
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x12) < 0x24) {
      *(undefined1 *)(param_1 + 0xd6) = 1;
    }
    else {
      if (((*(ushort *)(DAT_0807aaf4 + 8) & 8) == 0) &&
         (*(int *)(*DAT_0807aaf8 + 0x54) < *(int *)(param_1 + 0x54) + DAT_0807aafc)) {
        piVar4 = (int *)(*DAT_0807aaf8 + 0x1bc);
        *piVar4 = *piVar4 + 0x100;
      }
      if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
        if ((*(byte *)(param_1 + 0x12) >> 2 & 1) == 0) {
          uVar3 = *DAT_0807ab38 * DAT_0807ab3c + DAT_0807ab40;
          *DAT_0807ab38 = uVar3 & 0x7fffffff;
          cVar2 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,0x30);
          cVar2 = -cVar2;
        }
        else {
          uVar3 = *DAT_0807ab00 * DAT_0807ab04 + DAT_0807ab08;
          *DAT_0807ab00 = uVar3 & 0x7fffffff;
          cVar2 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,0x30);
        }
        FUN_080e4210(param_1,1,cVar2 + -0x80);
      }
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0807abbc);
    FUN_0801cff0(param_1);
    FUN_08002b10(DAT_0807abc0);
    FUN_080cd6d0(param_1,0,0);
    FUN_080cd6d0(param_1,1,0);
    FUN_080cd6d0(param_1,2,0);
    FUN_080cd6d0(param_1,3,0);
    FUN_080cd6d0(param_1,4,0);
    FUN_080cd6d0(param_1,5,0);
    FUN_080cd6d0(param_1,6,0);
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0xd7) != '\0') {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd6) = 0;
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


