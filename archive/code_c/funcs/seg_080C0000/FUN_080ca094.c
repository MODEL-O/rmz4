// undefined FUN_080ca094(void)
// entry 0x80ca094


undefined4 FUN_080ca094(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined1 *)(param_1 + 0xb5) = 1;
    if ((*(char *)(param_1 + 0x11) != '\x03') && (*(int *)(param_1 + 0x2c) != 0)) {
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xb6) = *(undefined1 *)(param_1 + 0xb6);
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xd) = 2;
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xe) = 0;
      if (*(char *)(param_1 + 0xc1) == '\x01') {
        *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xc1) = 1;
      }
      if (*(int *)(*(int *)(param_1 + 0x2c) + 0x28) != 0) {
        FUN_080ca468(*(int *)(param_1 + 0x2c));
      }
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x28) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_080ca024(param_1);
  cVar1 = FUN_080ca298(param_1);
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0xc1) == '\x01') {
      piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ca148);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined1 *)(param_1 + 0xb4) = 1;
      if (*(char *)(param_1 + 0x11) != '\0') {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        *(undefined1 *)(param_1 + 0xb5) = 0;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0x200;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      pbVar6 = (byte *)(param_1 + 0x4a);
      *pbVar6 = *pbVar6 & 0xef;
      bVar3 = *(byte *)(param_1 + 0xb6);
      if (bVar3 == 0) {
        bVar2 = *(byte *)(param_1 + 10) & 0xdf;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) | 0x20;
      }
      *(byte *)(param_1 + 10) = bVar2;
      bVar3 = bVar3 & 1;
      *(byte *)(param_1 + 0x4d) = bVar3;
      *pbVar6 = *pbVar6 & 0xdf | bVar3 << 5;
      if (*(char *)(param_1 + 0x11) == '\0') {
        FUN_0801cf00(param_1,DAT_080ca1e8);
      }
      else if (*(char *)(param_1 + 0x11) == '\x03') {
        FUN_0801cf00(param_1,DAT_080ca20c);
        bVar3 = *(byte *)(param_1 + 10);
        bVar2 = ~(bVar3 >> 5) & 1;
        if (bVar2 == 0) {
          bVar3 = bVar3 & 0xdf;
        }
        else {
          bVar3 = bVar3 | 0x20;
        }
        *(byte *)(param_1 + 10) = bVar3;
        *(byte *)(param_1 + 0x4d) = bVar2;
        *pbVar6 = *pbVar6 & 0xdf | bVar2 << 5;
      }
      else {
        FUN_0801cf00(param_1,DAT_080ca264);
      }
      FUN_080ca2ec(param_1);
      if (*(byte *)(param_1 + 0xb6) == 0) {
        iVar5 = *(int *)(param_1 + 0x60) * -0x100;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 0xff;
        }
        *(int *)(param_1 + 0x60) = iVar5 >> 8;
      }
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


