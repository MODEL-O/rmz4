// undefined FUN_08057d98(void)
// entry 0x8057d98


undefined4 FUN_08057d98(int param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 *apuStack_34 [4];
  undefined1 *local_24;
  undefined1 *local_20;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08057e8c);
    *(undefined1 *)(param_1 + 0x12) = 4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_08057e94) * 4 + DAT_08057e90)) * 0x18 + DAT_08057e98);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    if (((*(byte *)(DAT_08057e9c + DAT_08057ea0) & 0x10) == 0) ||
       (bVar3 = *(byte *)(DAT_08057ea4 + 4) & 4, (*(byte *)(DAT_08057ea4 + 4) & 4) != 0)) {
      bVar3 = 0;
      *(undefined1 *)(param_1 + 0xd) = 0xb;
    }
    else {
      FUN_08129258(auStack_44,PTR_DAT_08057ea8,2);
      FUN_08129258(auStack_40,PTR_DAT_08057eac,2);
      FUN_08129258(auStack_3c,PTR_DAT_08057eb0,2);
      FUN_08129258(auStack_38,PTR_DAT_08057eb4,2);
      apuStack_34[3] = auStack_40;
      local_24 = auStack_3c;
      local_20 = auStack_38;
      FUN_08129258(apuStack_34,apuStack_34 + 3,0xc);
      iVar2 = FUN_0805977c(param_1);
      iVar2 = FUN_08059b68(apuStack_34[iVar2],2);
      *(undefined1 *)(param_1 + 0xd) = auStack_44[iVar2];
    }
    *(byte *)(param_1 + 0xe) = bVar3;
    *(byte *)(param_1 + 0xf) = bVar3;
  }
  return in_lr;
}


