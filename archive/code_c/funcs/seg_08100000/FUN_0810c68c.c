// undefined FUN_0810c68c(void)
// entry 0x810c68c


undefined4 FUN_0810c68c(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined4 in_lr;
  undefined2 auStack_8c [44];
  undefined1 auStack_34 [17];
  undefined1 local_23;
  undefined1 local_22;
  
  FUN_08129258(auStack_8c,DAT_0810c6d0,0x58);
  FUN_081292b8(auStack_34,0,0x16);
  local_23 = 1;
  local_22 = 2;
  uVar3 = (uint)*(byte *)(param_1 + 0x75);
  bVar2 = *(byte *)(param_1 + 10);
  bVar4 = bVar2 >> 4 & 1;
  if (uVar3 == 0x16) {
    *(byte *)(param_1 + 10) = bVar2 & 0xfe;
  }
  else {
    *(byte *)(param_1 + 10) = bVar2 | 1;
    cVar1 = *(char *)(param_1 + 0x74);
    if (cVar1 != '\0') {
      if (cVar1 == '\x02') {
        FUN_0801cdbc(param_1);
        *(byte *)(param_1 + 0x4c) = bVar4;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
        if ((bVar2 >> 4 & 1) == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_1 + 0x78);
        *(undefined2 *)(param_1 + 0x52) = *(undefined2 *)(param_1 + 0x7a);
        *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0x76);
      }
      *(undefined1 *)(param_1 + 0x22) = auStack_34[uVar3];
      FUN_0801cf00(param_1,auStack_8c[uVar3 * 2]);
      *(char *)(param_1 + 0x74) = '\0';
    }
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


