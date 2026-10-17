// undefined FUN_0808b6c4(void)
// entry 0x808b6c4


undefined4 FUN_0808b6c4(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x2100);
    bVar2 = *(byte *)(param_1 + 10);
    bVar3 = ~(bVar2 >> 4) & 1;
    if (bVar3 == 0) {
      bVar2 = bVar2 & 0xef;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_0808b778) * 4 + DAT_0808b774)) * 0x18 + DAT_0808b77c);
  FUN_0808bbd8(param_1);
  cVar1 = *(char *)(param_1 + 0xb9);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xb9) = cVar1 + -1;
  }
  *(undefined1 *)(param_1 + 0xe) = 1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


