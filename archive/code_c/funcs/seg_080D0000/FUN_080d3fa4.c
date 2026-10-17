// undefined FUN_080d3fa4(void)
// entry 0x80d3fa4


undefined4 FUN_080d3fa4(int param_1)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 in_lr;
  
  iVar2 = DAT_080d4090;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    FUN_080025d8(*(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + DAT_080d401c));
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) != '\0') {
      FUN_08002b10(0);
    }
    uVar4 = 0x18;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        FUN_080025d8(*(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + DAT_080d4048));
        cVar3 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar3;
        if (cVar3 != -1) {
          return in_lr;
        }
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        *(undefined1 *)(param_1 + 0x12) = 0;
        return in_lr;
      }
      if (bVar1 != 3) {
        return in_lr;
      }
      FUN_080025d8(*(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + DAT_080d4090));
      cVar3 = *(char *)(param_1 + 0x12) + '\x01';
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != '!') {
        return in_lr;
      }
      FUN_08002624(*(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + iVar2));
      piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d4094);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
      FUN_080d3f38(param_1);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    cVar3 = *(char *)(param_1 + 0x12) + '\x01';
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != '\'') {
      return in_lr;
    }
    FUN_0800249c(*(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + DAT_080d3fe4),0x20);
    uVar4 = 0x26;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar4;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}


